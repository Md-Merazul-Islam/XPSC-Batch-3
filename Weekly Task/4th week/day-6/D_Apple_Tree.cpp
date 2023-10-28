#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

const int N = 2e5;
vector<int> adj[N];
ll cnt[N];

void dfs(ll node, ll p)
{
    if (adj[node].size() == 1 && node != 1)
        cnt[node] = 1;

    for (ll ch : adj[node])
    {
        if (ch != p)
        {
            dfs(ch, node);
            cnt[node] += cnt[ch];
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cnt[i] = 0;
        adj[i].clear();
    }

    for (ll i = 1; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, -1);
    ll q;
    cin >> q;
    while (q--)
    {
        ll am, an;
        cin >> am >> an;
        cout << cnt[am] * cnt[an] << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
