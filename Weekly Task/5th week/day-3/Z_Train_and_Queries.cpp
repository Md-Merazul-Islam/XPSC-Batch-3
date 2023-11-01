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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]].push_back(i);
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (mp.count(a) && mp.count(b))
        {
            int dx = mp[a].front(), dx2 = mp[b].back();

            if (dx <= dx2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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