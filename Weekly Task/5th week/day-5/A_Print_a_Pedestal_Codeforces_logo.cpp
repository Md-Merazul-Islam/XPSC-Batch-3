/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll a = 0, b = 0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        b = i;
        ll x = n - b;
        if (x % 2 == 0)
        {
            a = (x / 2) + 1;
        }
        else
        {
            a = (x + 1) / 2;
        }
        c = n - a - b;
        if (a > 0 && b > 0 && c > 0 && a < b && a > c)
        {
            break;
        }
    }
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}