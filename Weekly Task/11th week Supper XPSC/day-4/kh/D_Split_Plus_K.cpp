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

ll findGCD(ll a, ll b)
{
    return b == 0 ? a : findGCD(b, a % b);
}

void mdmerazulislam()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        a[i] -= k;
    }
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        sum += a[i];
    }

    ll minElement = *min_element(a.begin(), a.end());
    ll maxElement = *max_element(a.begin(), a.end());
    if ( minElement == 0&&sum == 0 )
        cout << 0;
    else if (sum == 0)
        cout << -1;
    else if ( minElement <= 0&&sum > 0 )
        cout << -1;
    else if (sum < 0 && maxElement >= 0)
        cout << -1;
    else
    {
        ll gcd = 0;
        for (ll i = 0; i < n; ++i)
        {
            gcd = findGCD(gcd, a[i]);
        }
        cout << abs(sum / gcd) - n;
    }
    cout << nl;
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
