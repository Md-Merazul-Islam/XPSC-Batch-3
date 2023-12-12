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

bool chk(const vector<ll> &a)
{
    ll mxeven = 0, mxodd = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < max(a[i] & 1 ? mxodd : mxeven, a[i]))
        {
            return false;
        }
        if (a[i] & 1)
        {
            mxodd = max(mxodd, a[i]);
        }
        else
        {
            mxeven = max(mxeven, a[i]);
        }
    }
    return true;
}

void mdmerazulislam()
{
    ll n;
    cin >> n;
    vi a(n);
    loop(i, 0, n) cin >> a[i];
    bool ok = chk(a);
    
    if (ok)
        yes;
    else
        no;
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