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
#define fori(i, a, b) for (int i = (a); i < (b); ++i)
#define repi(i, a, b) for (int i = (a); i <= (b); ++i)
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    int n;
    cin >> n;
    vi a(n), v;
    map<int, int> mp, mpl;
    fori(i, 0, n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto m : mp) {
        int x = m.first;
        int y = m.second;
        if (x <= n) {
            fori(i, 1, y) {
                v.push_back(x);
            }
                mpl[x] = 1;
        } else {
            repi(i, 1, y )
                v.push_back(x);
        }
    }
    int cnt = 1;
    int ans = 0;
    fori(i, 0, v.size()) {
        for (int j = cnt; j <= n; j++) {
            if (mpl[j] == 1)
                cnt++;
            else
                break;
        }
        int x = (v[i] - 1) / 2;
        if (cnt <= x) {
            cnt++; ans++;
        } else {
            ans = -1;
            break;
        }
    }
    cout << ans << nl;
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
