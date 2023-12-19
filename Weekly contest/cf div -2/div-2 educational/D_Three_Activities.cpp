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
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)


void st(vpi &tmp) {
    rsrt(tmp);
}

ll solve(int n, vi &a, vi &b, vi &c) {
    vpi aa(n), bb(n), cc(n);
    loop(i, 0, n) {
        aa[i] = make_pair(a[i], i);
        bb[i] = make_pair(b[i], i);
        cc[i] = make_pair(c[i], i);
    }
    st(aa), st(bb), st(cc);
    ll ans = 0;
    for (int i = 0; i < min(3, n); i++) {
        for (int j = 0; j < min(3, n); j++) {
            for (int k = 0; k < min(3, n); k++) {
                int tmp1 = aa[i].first, tmp2 = bb[j].first, tmp3 = cc[k].first;
                if (aa[i].second != bb[j].second && aa[i].second != cc[k].second && bb[j].second != cc[k].second) {
                    ll x = tmp1 + tmp2 + tmp3;
                    // t tmp1 = aa[i].first, tmp2 = bb[j].first, tmp3 = cc[k].first;
                    ans = max(x, ans);
                }
            }
        }
    }
    return ans;
}

void mdmerazulislam()
{
    int n;
    cin >> n;
    vi a(n), b(n), c(n);
    loop(i, 0, n) cin >> a[i];
    loop(i, 0, n) cin >> b[i];
    loop(i, 0, n) cin >> c[i];
    cout << solve(n, a, b, c) << endl;
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