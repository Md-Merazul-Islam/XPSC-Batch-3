
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<char, ll> f_ocr;
        map<char, ll> s_ocr;
        map<string, ll> self;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f_ocr[a[i][0]]++;
            s_ocr[a[i][1]]++;
            self[a[i]]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll first = max((ll)0, f_ocr[a[i][0]] - self[a[i]]);
            ans += first;
            ll second = max((ll)0, s_ocr[a[i][1]] - self[a[i]]);
            ans += second;
            if (self[a[i]] > 0)
                self[a[i]]--;
            if (f_ocr[a[i][0]] > 0)
                f_ocr[a[i][0]]--;
            if (s_ocr[a[i][1]] > 0)
                s_ocr[a[i][1]]--;
        }
        cout << ans << endl;
    }
    return 0;
}
