/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/
#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

void mdmerazulislam()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, r = INT_MAX;
    ll ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int last = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - a[last] <= (2 * mid))
                continue;
            last = i;
            cnt++;
        }

        if (cnt < 3)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    // Output the result
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}
