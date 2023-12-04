// // #include <iostream>
// // using namespace std;
// // typedef long long ll;

// // int main() {
// //     int t;
// //     cin >> t;

// //     for (int i = 0; i < t; ++i) {
// //         ll n, b, c, d;
// //         cin >> n >> b >> c >> d;

// //         ll rac = (n - n % 7) / 7 + 1;
// //         rac -= (n % 7 == 0 ? 1 : 0);
// //         ll lef = 1, rig = rac;
// //         ll ans = rac;

// //         while (lef <= rig) {
// //             ll mid = (lef + rig) / 2;
// //             if (b <= (mid + 1) / 2 * c + d * mid) {
// //                 ans = mid;
// //                 rig = mid - 1;
// //             } else {
// //                 lef = mid + 1;
// //             }
// //         }

// //         ll rac2 = (ans + 1) / 2;
// //         ll taodeptrai = rac2 * c + d * ans;
// //         b = b - taodeptrai;
// //         ll tmp = rac2;
// //         b = max(b, 0LL);
// //         tmp = tmp + (b / c);
// //         tmp = tmp + (b % c != 0);
// //         cout << n - tmp << endl;
// //     }

// //     return 0;
// // }

// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<int, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

// ll tsk(ll d)
// {
//     ll day = (d - d % 7) / 7 + 1;
//     day -= (d % 7 == 0 ? 1 : 0);
//     return day;
// }

// bool isok(ll b, ll mid, ll c, ll d)
// {
//     return b<=(mid+1)/2* c + d*mid;
// }

// void mdmerazulislam()
// {
//     ll n, x, y, z;
//     cin >> n >> x >> y >> z;

//     ll l = 1, r =tsk(n);
//     ll ans =(n - n % 7) / 7 + 1;
//     while(l<=r){
//         ll mid = l+(r-l)/2;
//         if(isok(x,mid,y,z))
//         {
//             ans= mid;
//             r =mid-1;
//         }
//         else{
//             l = mid+1;
//         }
//     }
//     ll rest = (ans+1)/2;
//     ll tmp = rest*y+z*ans;
//     x = x-tmp;
//     ll tmp2= rest;
//     x = max(x,0LL);
//     tmp2 +=(x/y);
//     tmp2 +=(x%y!=0);
//     cout<<n-tmp2<<endl;

// }

// int main()
// {
//     fast;

//     int t;
//     cin >> t;
//     while (t--)
//         mdmerazulislam();

//     return 0;
// }

/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/
#include <iostream>
using namespace std;
typedef long long ll;

ll calculateDays(ll n) {
    ll days = (n - n % 7) / 7 + 1;
    days -= (n % 7 == 0 ? 1 : 0);
    return days;
}

bool isPossible(ll x, ll mid, ll y, ll z) {
    return x <= (mid + 1) / 2 * y + z * mid;
}

ll solve() {
    ll n, x, y, z;
    cin >> n >> x >> y >> z;

    ll totalDays = calculateDays(n);
    ll left = 1, right = totalDays;
    ll optimalValue = totalDays;

    while (left <= right) {
        ll mid = (left + right) / 2;
        if (isPossible(x, mid, y, z)) {
            optimalValue = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    ll halfOptimalValue = (optimalValue + 1) / 2;
    ll modifiedRac2 = halfOptimalValue;
    ll totalValue = halfOptimalValue * y + z * optimalValue;
    x -= totalValue;
    x = max(x, 0LL);

    modifiedRac2 += (x / y);
    modifiedRac2 += (x % y != 0);

    return n - modifiedRac2;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cout << solve() << endl;
    }

    return 0;
}
