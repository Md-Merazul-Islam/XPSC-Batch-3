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
    ll n;
    cin >> n;
    vi a(n);

    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = n;
    ll s = 0;

    for (ll i = 1; i < n; i += 2)
    {
        s += a[i];
        ans = min(ans, s + (n - 1 - i));
    }

    cout << ans << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}