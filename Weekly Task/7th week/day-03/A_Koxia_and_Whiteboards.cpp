#include <iostream>
#include <set>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    rep(_, 0, t) {
        int n, m;
        cin >> n >> m;
        ll a[n];
        ll ans = 0;
        multiset<ll> st;

        rep(i, 0, n) {
            cin >> a[i];
            st.insert(a[i]);
            ans += a[i];
        }

        rep(i, 0, m) {
            ll b;
            cin >> b;
            ll u = *st.begin();
            ans += b - u;
            st.erase(st.begin());
            st.insert(b);
        }

        cout << ans << endl;
    }

    return 0;
}
