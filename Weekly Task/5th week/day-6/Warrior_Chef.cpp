/**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;
int n, h;
bool check(vector<int> &a, int mid)
{
    ll x = mid;
    ll tmp = h;
    for (int i = 0; i < n; i++)
    {
        if (x >= a[i])
        {
            continue;
        }
        else if (tmp > a[i])
        {
            tmp -= a[i];
        }
        else
        {
            return false;
        }
    }
    return true;
}

void mdmerazulislam()
{
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    ll l = 0, r = INT_MAX;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(a, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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
        mdmerazulislam();
    }

    return 0;
}