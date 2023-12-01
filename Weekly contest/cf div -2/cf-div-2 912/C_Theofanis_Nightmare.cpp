/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define ff first
#define ss second
#define vi vector<ll>
#define vpi vector<pair<ll, ll>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
const int N = 1e7 + 4;

void mdmerazulislam()
{
    ll n;
    cin >> n;
    vi a(n);
    loop(i, 0, n) cin >> a[i];
    vpi dp(n + 1);
    loop(i, 0, n + 1)
    {
        dp[i] = make_pair(0, 1);
    }
    ll sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ll tmp = dp[i + 1].ff;
        ll cnt = dp[i + 1].ss;
        dp[i] = make_pair(tmp + a[i], cnt);
        ll n_v = tmp + sum + a[i];
        ll n_c = cnt + 1;
        // // cout<<n_v<<" "<<n_c<<endl;
        // if (n_v > dp[i].ff)
        // {
        //     dp[i] = make_pair(n_v, n_c);
        // }
        // ans = max(static_cast<long long>(ans), dp[i].ff);
        dp[i] = max(make_pair(n_v, n_c), dp[i]);
        sum += a[i];
        // cout << sum << endl;
    }
    ll ans = dp[0].ff;
    cout << ans << endl;
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