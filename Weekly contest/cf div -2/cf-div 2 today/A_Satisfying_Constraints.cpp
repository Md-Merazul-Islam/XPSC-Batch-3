#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll findBeauty(vi &ans, ll mxx, ll mnn)
{
    ll cnt = mnn - mxx + 1;
    for (auto val : ans)
        if (val >= mxx && val <= mnn)
            cnt--;
    return max(cnt, 0LL);
}
void mdmerazulislam()
{
    int n;
    cin >> n;
    vi ans;
    ll mxx = -1, mnn = LLONG_MAX;
    while (n--)
    {
        ll a, x;
        cin >> a >> x;
        if (a == 2)
            mnn = min(mnn, (ll)x);
        else if (a == 1)
            mxx = max(mxx, (ll)x);
        else
            ans.pb(x);
    }
    cout << findBeauty(ans, mxx, mnn) << endl;
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
