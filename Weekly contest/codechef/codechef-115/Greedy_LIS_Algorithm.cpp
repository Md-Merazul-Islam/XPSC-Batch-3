

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
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
void mdmerazulislam()
{
    int x, y;
    cin >> x >> y;
    if (x == 1 && y == 0)
    {
        cout << 1 << endl;
        return;
    }
    if (y != 0 && (y == x || y == x - 1))
    {
        cout << -1 << endl;
        return;
    }
    else if (y == 0)
    {
        for (int i = 1; i <= x; i++)
            cout << i << " ";
        nl;
        return;
    }
    else
    {
        vi ans;
        for (int i = 1; i <= x; i++)
        {
            if (i != x)
                ans.push_back(i);
        }
        ans.insert(ans.begin() + max(0, x - y - 2), x);
        for (int val : ans)
            cout << val << " ";
        nl;
        return;
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
