// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll n;
//     cin >> n;
//     ll a[n];
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     ll ans = INT_MAX;

//     ll mx = INT_MIN, mn = INT_MAX;
//     for (int j = 0; j < n; j++)
//     {
//         mx = max(mx, a[j]);
//         mn = min(mn, a[j]);
//     }
//     ll x = mx - mn;
//     // ans = min(ans, x);

//     cout << x << endl;
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int x = a[n - 2] - a[0];
    int y = a[n - 1] - a[1];
    ll ans = min(x, y);

    cout << ans << endl;
    return 0;
}
