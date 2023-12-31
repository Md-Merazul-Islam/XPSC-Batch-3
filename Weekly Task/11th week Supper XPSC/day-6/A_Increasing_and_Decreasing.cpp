
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
    int x, y, n, q = 1;
    cin >> x >> y >> n;
    vector<int> a(n, 0);
    a.back() = y;
    for (int i = n - 2; i >= 0; i--)
    {
        a[i] = a[i + 1] - q, q++;
    }
    if (x <= a[0])
    {
        a[0] = x;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
        cout << -1;
    cout << '\n';
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