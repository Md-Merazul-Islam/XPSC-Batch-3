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
    int t, n, i;
    string s;
    cin >> n >> s;
    int a[n], mx = 0, c = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (s[i] == '1')
        {
            c += max(mx, a[i]);
        }
        if (s[i] == '0' || mx > a[i])
        {
            mx = a[i];
        }
    }
    cout << c << endl;
}

int main()
{
    fast;
    int t, n, i;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}
