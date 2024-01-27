
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
#define vpi vector<pair<ll, ll>>
#define pii pair<ll,ll> 
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i,0, a.size()) cin >> a[i]
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 +5;
set<ll> getDivisors(ll n) {
    set<ll> divs;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divs.insert(i);
            divs.insert(n / i);
        }
    }
    return divs;
}
ll find_MX(ll n, ll k) {
    set<ll> dvs = getDivisors(n);
    ll q = n / k;
    auto ans = dvs.lower_bound(q);
    if (*ans > q) ans--;
    return *ans;
}

void hello_wrold_solve_here()
{
    
    ll n, k; cin >> n >> k;
    ll ans = find_MX(n, k);
    cout << ans << line;
}


signed main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_wrold_solve_here();
    return 0;
}
