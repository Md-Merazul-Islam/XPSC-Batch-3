
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
**************************************************************/
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

void mdmerazulislam()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
            l += a[i]; 
        else
            r += a[i];     
    }
    if (l == r)
    {
        cout << "YES\n";
        return;
    }

    unordered_map<ll, int> mp;
    mp[l - r] = 1;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            l -= a[i ];
        
        else
            r -= a[i ];
        

        if (mp[l - r])
        {
            yes;
            return;
        }
        mp[l - r] = 1;
    }
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