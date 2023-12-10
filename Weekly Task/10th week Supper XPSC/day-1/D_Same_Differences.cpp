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
    vi a(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[a[i] - i]++;
    }
    ll ans = 0;
    for (auto it : mp)
    {
        ll val = it.second;
        ans += (val * (val - 1)) / 2;
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