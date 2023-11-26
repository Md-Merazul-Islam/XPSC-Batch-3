/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define fori(i, a, b) for (int i = (a); i < (b); ++i)
#define repi(i, a, b) for (int i = (a); i <= (b); ++i)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int actions = 0;
    bool ok = false;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
        {
            ok = true;
            break;
        }
    }
    if (ok)
    {
        actions = 2;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                actions++;
            }
        }
    }
    cout<<actions<<endl;
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