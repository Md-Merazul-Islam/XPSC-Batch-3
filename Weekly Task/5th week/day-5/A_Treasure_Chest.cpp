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
    int x, y, k;
    cin >> x >> y >> k;
    int ans = 0;
    if (x >= y)
    {
        ans = x;
    }
    else if ((x + k) >= y)
    {
        ans = y;
    }
    else
    {
        ans = (max(x, y) + abs(y - x) - k);
    }
    cout << ans << endl;
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