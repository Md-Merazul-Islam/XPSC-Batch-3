/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

void mdmerazulislam()
{
    ll x, y;
    cin >> x >> y;

    // if (x == y)
    //     cout << 1 << endl;
    // // else
    // // {

    // //     for (ll i = 0; i < x; i++)
    // //     {
    //         a.push_back(1);
    //     }
    //     a.push_back(-2);
    //     ll sum = 0;
    //     for (ll i = 0; i < a.size(); i++)
    //     {
    //         sum += a[i];
    //     }
    //     cout << abs(sum) << endl;
    // // }
    // int x, y;
    // // cin >> x >> y;
    // else
    // {

        if (x <= y)
            cout << 1 << endl;
        else
        {
            int tmp = x - 2 * y;
            cout << max(2, tmp) << endl;
        }
    // }
}
// ll mx = max(x, y), mn = min(x, y);
// ll ans = mx + mn;
// cout << max(ans, (x + y)) << endl;

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}
