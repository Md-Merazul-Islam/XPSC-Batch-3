
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
    string s;
    cin >> s;
    string ans = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < n / 2 + 1; i++)
    {
        if (s[i] == 'R')
            ans += 'P';
        else if (s[i] == 'P')
            ans += 'S';
        else if (s[i] == 'S')
            ans += 'R';
    }
    int cnt = 0, tmp = 0;
    for (int i = n / 2 +1; i < n; i++)
    {
        if (s[i] == 'R')
            cnt++;
        ans += 'P';
        tmp++;
    }
    reverse(ans.begin(), ans.end());
    for (int i = tmp; i < n; i++)
    {
        if (cnt > 0 && ans[i] != 'P')
        {
            ans[i] = 'P';
            cnt--;
        }
    }
    cout << ans << endl;
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
