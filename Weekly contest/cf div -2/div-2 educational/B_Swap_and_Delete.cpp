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
    ll a = 0, b = 0;

    for (char c : s)
    {
        if (c == '1')
            b++;
        else
            a++;
    }

    ll n = s.size();
    loop(i, 0, n)
    {
        char c = s[i];

        if (c == '0')
        {
            if (b == 0)
            {
                cout << n - i << nl;
                return;
            }
            else
            {
                b--;
            }
        }
        if (c == '1')
        {
            if (a == 0)
            {
                cout << n - i << nl;
                return;
            }
            else
            {
                a--;
            }
        }
    }

    cout << 0 << endl;
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