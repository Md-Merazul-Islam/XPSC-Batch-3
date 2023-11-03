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
const int N = 2005;
int a[N], b[N];
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
    }
    int ans = N;
    for (int i = 1; i <= n; i++)
    {
        int cnt = i;
        int sum = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (b[j] == b[cnt] + b[i])
            {
                sum = max(sum, j - cnt);
                cnt = j;
            }
        }
        if (cnt == n)
        {
            ans = min(ans, sum);
        }
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
