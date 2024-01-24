
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
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;

ll cnt_zr(const string &s, ll pos)
{
    ll cnt = 0;
    for (int i = pos; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
    }
    return cnt;
}
ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans *= a;
        }
        a *= a;
        b /= 2;
    }
    return ans;
}
string str_chk(ll n)
{
    string x = "";
    while (n != 0)
    {
        x += (n & 1) ? '1' : '0';
        n >>= 1;
    }
  return string(x.rbegin(), x.rend());
}

void hello_wrold_solve_here()
{
    ll n;
    cin >> n;
    string ss = str_chk(n);
    string s = "11";
    ll tmp = 0, poss = 0;
    loop(i, 0, ss.size())
    {
        if (ss[i] == s[tmp])
        {
            tmp++;
            if (tmp == 2)
            {
                poss = i + 1;
                break;
            }
        }
    }
    if (tmp <= 1 || tmp == -22)
    {
        cout << "1" << endl;
        return;
    }

    ll cnt = cnt_zr(ss, poss);
    cout << power(2, cnt) << endl;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        hello_wrold_solve_here();
    return 0;
}