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

const int N = 1e5 + 9;

void hello_wrold_solve_here() {
    ll n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != 1) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << 1 << '\n';
        return;
    }

     vi ans(N+1);

    for (int i = 0; i < n; i++) {
        ll val = a[i];
        for (int j = 2; j * j <= val; j++) {
            if (val % j == 0) {
                    ans[j]++;
                while (val % j == 0) {
                    val /= j;
                }
            }
        }
        if (val > 1) ans[val]++;
    }

     ll ottor = 0;
     for(int i=0; i<ans.size(); i++){
        ottor= max(ottor,ans[i]);
     }

    cout << ottor << endl;
}

int32_t main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) hello_wrold_solve_here();
    return 0;
}






// #include <iostream>
// using namespace std;
// int n, mx = 1, s = 0, x;
// int a[100010];
// int main()
// {
//     cin >> n;
//     while (n--)
//     {
//         cin >> x;
//         a[x]++;
//     }
//     for (int i = 2; i <= 100000; i++)
//     {
//         s = 0;
//         for (int j = i; j <= 100000; j += i)
//             s += a[j];
//         mx = max(s, mx);
//     }
//     cout << mx;
// }