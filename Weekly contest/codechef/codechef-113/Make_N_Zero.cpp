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

bool mdmerazulislam(ll n)
{
    while (n > 1)
    {
        if (n % 3 == 0)
        {
            n = 0;
        }
        else if (n % 4 == 0)
        {
            n = 0;
        }
        else
        {
            n -= 4;
        }
    }
    return n == 0;
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (mdmerazulislam(n))
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
