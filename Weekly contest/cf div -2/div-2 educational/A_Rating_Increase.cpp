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
    string s;
    cin >> s;
    string s1, s2;
    int n = s.size();
    bool ok = false;

    for (int i = 1; i < n; i++)
    {
        s1 = s.substr(0, i);
        s2 = s.substr(i);
        if (s1[0] != '0' && s2[0] != '0' && stoi(s1) < stoi(s2))
        {
            ok = true;
            cout << s1 << " " << s2 << nl;
            break;
        }
    }

    if (!ok)
    {
        cout << -1 << endl;
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