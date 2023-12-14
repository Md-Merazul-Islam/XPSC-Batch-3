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
    vector<string> s(n);
    loop(i, 0, n) cin >> s[i];
    vector<set<int>> st(n);
    for (int i = 0; i < n; i++)
    {
        st[i].insert(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '1')
            {
                st[j].insert(i + 1);
            }
        }
    }
    for (int i = 0; i <n; i++)
    {
        cout << st[i].size() << " ";
        for (int val : st[i])
        {
            cout << val << " ";
        }
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