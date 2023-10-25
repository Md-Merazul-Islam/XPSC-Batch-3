#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll odd = 0;
        ll sum = 0;
        bool flag = false;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += abs(a[i]);

            if (a[i] < 0)
            {
                odd++;
                flag = true;
            }
            else if (a[i] == 0 && flag)
            {
                odd++;
            }
            else
            {
                if (odd != 0)
                    ans++;
                odd = 0;
                flag = false;
            }
        }
        if (odd != 0)
            ans++;
        cout << sum << " " << ans << endl;
    }
    return 0;
}
