
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
    vi a(n);
    loop(i, 0, n) cin >> a[i];
    srt(a);
    ll i = 2;
    ll ans = 1e9 + 7;
    while (i < n)
    {
        ans = min(ans, a[i - 1] - a[i - 2] + a[i] - a[i - 1]);
        i++;
    }   cout<<ans<<endl;
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