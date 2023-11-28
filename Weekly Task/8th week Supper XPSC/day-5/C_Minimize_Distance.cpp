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
#define fori(i, a, b) for (int i = (a); i < (b); ++i)
#define repi(i, a, b) for (int i = (a); i <= (b); ++i)
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    fori(i, 0, n) cin >> a[i];
    srt(a);

    ll ans = 0;
    int i = n - 1;
    while (i >= 0 && a[i] > 0)
    {
        ans += a[i];
        i -= k;
    }
    i = 0;
    while (i < n && a[i] < 0)
    {

        ans -= a[i];
        i += k;
    }
    cout << 2 * ans - max(abs(a[0]), abs(a[n - 1])) << nl;
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