#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test = 1;
    while (true)
    {

        int n, q;
        cin >> n >> q;
        if(n==0 && q==0 ) break;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        cout << "CASE# " << test << ":" << endl;
        for (int i = 1; i <= q; i++)
        {
            int x;
            cin >> x;
            auto it = lower_bound(a.begin(), a.end(), x);
            int ans = (it - a.begin()) + 1;
            if (it != a.end() && *it == x)
            {
                cout << x << " found at " << ans << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }
        test++;
    }

    return 0;
}