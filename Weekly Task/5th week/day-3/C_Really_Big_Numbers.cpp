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

ll sum_of_digit(ll mid)
{
    ll sum = 0;
    while (mid > 0)
    {
        sum += mid % 10;
        mid /= 10;
    }
    return sum;
}

void solve()
{
    int n, s;
    cin >> n >> s;

    ll l = 1, r = n;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l+(r-l)/2;
        if (mid - sum_of_digit(mid) >= s)
        {
            ans = max(ans, (n - mid + 1));
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout <<ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
