#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> dp(n + 1, 0);
    vector<ll> sortdp(n + 1, 0);

    for (ll i = 0; i < n; i++)
    {
        dp[i + 1] = dp[i] + a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        sortdp[i + 1] = sortdp[i] + a[i];
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll cmd, l, r;
        cin >> cmd >> l >> r;
        if (cmd == 1)
        {
            cout << dp[r] - dp[l - 1] << endl;
        }
        else
        {
            cout << sortdp[r] - sortdp[l - 1] << endl;
        }
    }
    return 0;
}