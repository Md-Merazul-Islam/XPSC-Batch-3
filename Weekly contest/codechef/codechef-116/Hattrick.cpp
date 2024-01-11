
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


bool mdmeraz(vector<string> &s)
{
    int n = s.size();
    if (n < 3)
        return false;
    for (int i = 0; i <4; ++i)
    {
        if ((s[i] == "W" && s[i + 1] == "W" && s[i + 2] == "W"))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> s(6);
        for (int i = 0; i < 6; ++i)
        {
            cin >> s[i];
        }
        if (mdmeraz(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
