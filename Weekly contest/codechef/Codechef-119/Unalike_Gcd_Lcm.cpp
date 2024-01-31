
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
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
#define vpi vector<pair<ll, ll>>
#define pii pair<ll, ll>
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i, 0, a.size()) cin >> a[i]
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;
vector<int> pf;

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        pf.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            pf.push_back(i);
            n = n / i;
        }
    }

    if (n > 2)
        pf.push_back(n);
}

void hello_world_solve_here()
{
    int n, q;
    cin >> n >> q;
    pf.clear();
    primeFactors(n);
    map<int, int> mp;
    for (int i = 0; i < pf.size(); i++)
    {
        mp[pf[i]]++;
    }
    while (q--)
    {
        int p;
        cin >> p;
        int ans = 1;
        for (auto x : mp)
        {
            int cnt = 1;
            for (int i = 0; i < x.second; i++)
            {
                int chk = (p + 1) * i;
                if (chk == i + x.second)
                {
                    cnt++;
                }
            }
            ans *= cnt;
        }
        cout << ans << endl;
    }
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        hello_world_solve_here();
    return 0;
}
