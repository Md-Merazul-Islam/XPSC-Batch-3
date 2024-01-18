

/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**            https://github.com/Md-Merazul-Islam            **
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define revs(a) reverse(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void mdmerazulislam() {
    ll n;
    cin >> n;
    vi a(n+1,0);
    loop(i, 0, n) {int k;cin>>k;a[k]++;}
    ll ans = 0, pr = 0;
    for (int i = 0; i <=n; i++) {
        if (3 <= a[i]) {
            ll tmp = (a[i] * (a[i] - 1) * (a[i] - 2)) / 6;
            ans += tmp;
        }
        if (2 <= a[i]) {
            ll tmp =pr* ( (a[i] - 1)*a[i] ) / 2;
            ans +=  tmp;
        }
        pr += a[i];
    // cout << ans << line;
    }
    cout << ans << line;
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


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long num;
//         cin >> num;

//         vector<int> array(num + 1, 0);

//         for (long long i = 0; i < num; i++) {
//             long long x;
//             cin >> x;
//             array[x]++;
//         }

//         long long result = 0;
//         long long previous = 0;

//         for (long long i = 0; i <= num; i++) {
//             if (array[i] >= 3) {
//                 result += (array[i] * (array[i] - 1) * (array[i] - 2)) / 6;
//             }
//             if (array[i] >= 2) {
//                 result += (array[i] * (array[i] - 1)) / 2 * previous;
//             }
//             previous += array[i];
//         }

//         cout << result << endl;
//     }

//     return 0;
// }
