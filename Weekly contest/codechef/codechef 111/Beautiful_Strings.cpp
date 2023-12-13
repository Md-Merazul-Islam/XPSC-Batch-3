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
const int mod = 1e9 + 7;

void mdmerazulislam()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    ll ans = 1;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        ll tmp = (ans * (i->second + 1));
        ans = tmp % mod;
    }
    ans = ((ans - 1) + mod);
    ll tmp = ans % mod;

    cout << tmp << nl;
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