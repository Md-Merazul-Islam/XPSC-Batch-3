/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
        return;
    }
    bool ok = false;
    ll t = 1;
    while (t <= n)
    {
        if (n >= t and (n - t) % b == 0)
        {
            ok = true;
            break;
        }
        t *= a;
    }
    if (ok)
    {
        cout << "Yes" << nl;
    }
    else
    {
        cout << "No" << nl;
    }
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