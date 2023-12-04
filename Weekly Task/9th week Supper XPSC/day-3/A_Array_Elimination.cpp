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
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    ll b[30]={0};
    // for (int i = 0; i < 30; ++i)
    //     b[i] = 0;
    for (int i = 0; i < 30; ++i)
    {
        ll num(1LL << i);
        for (int j = 0; j < n; ++j)
        {
            if (a[j] & num)
                b[i]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        bool ok = false;
        for (int j = 0; j < 30; j++)
        {
            if (b[j] % i != 0)
            {
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << i << " ";
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
