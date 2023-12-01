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

ll msb(ll n)
{
    if (n == 0)
        return 0;
    int MSB = 0;
    n /= 2;
    while (n != 0)
    {
        n /= 2;
        MSB++;
    }
    return (1LL << MSB);
}

void mdmerazulislam()
{
    ll n;cin>>n;
    vi a(n);
    unordered_map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ll tmp = msb(a[i]);
        mp[tmp].push_back(i);
    }

    ll sum = 0;
    for (auto &val : mp)
    {
        ll sz = val.second.size();
        sz--;
        sum += (sz * (sz + 1)) / 2;
    }

    cout << sum << endl;
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