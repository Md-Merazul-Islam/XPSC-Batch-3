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
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            a[i][j] = k;
            k++;
        }
    }
    for (int i = 2; i <= n; i+=2)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }
    for (int i = 1; i <= n; i+=2)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }
}

int main()
{
    fast;

    int t;
    cin >> t;
 
    while (t--)
    {
        mdmerazulislam();
        cout << nl;
    }

    return 0;
}