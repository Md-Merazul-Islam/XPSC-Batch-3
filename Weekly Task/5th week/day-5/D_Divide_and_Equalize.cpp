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

bool ispossible(int n, vector<int> &a, int mid)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % mid != 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    int l = 0;
    int r = mx;
    bool flag = false;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ispossible(n, a, mid))
        {
            flag = true;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
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
