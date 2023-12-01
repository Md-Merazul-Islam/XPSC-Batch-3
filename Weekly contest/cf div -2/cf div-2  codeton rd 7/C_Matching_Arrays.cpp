// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;
// #define ll long long
// #define vli vector<ll>

// void solve() {
//     ll n, x;
//     cin >> n >> x;

//     vli a(n), b(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cin >> b[i];
//     }

//     vector<pair<ll, int>> aa(n), bb(n);
//     for (int i = 0; i < n; i++) {
//         aa[i] = {a[i], i};
//         bb[i] = {b[i], i};
//     }

//     sort(b.begin(), b.end());
//     sort(a.begin(), a.end());
//     sort(aa.begin(), aa.end());
//     sort(bb.begin(), bb.end());

//     int upper = n - x;
//     int lower = 0;

//     for (int i = upper; i < n; i++) {
//         if (b[lower++] >= a[i]) {
//             cout << "NO";
//             return;
//         }
//     }

//     upper = 0;
//     for (int i = lower; i < n; i++) {
//         if (b[i] < a[upper++]) {
//             cout << "NO";
//             return;
//         }
//     }

//     cout << "YES" << endl;
//     vli ans(n);

//     upper = n - x;
//     int itr = 0;
//     for (int i = upper; i < n; i++) {
//         ans[aa[i].second] = bb[itr].first;
//         itr++;
//     }

//     itr = 0;
//     lower = x;
//     for (int i = lower; i < n; i++) {
//         ans[aa[itr].second] = bb[i].first;
//         itr++;
//     }

//     for (auto i : ans) {
//         cout << i << " ";
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     for (int i = 1; i <= t; i++) {
//         solve();
//         cout << endl;
//     }
//     return 0;
// }

/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
void mdmerazulislam()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<pair<ll, ll>> a1(n), b1(n);
    for (int i = 0; i < n; i++)
    {
        a1[i] = {a[i], i};
        b1[i] = {b[i], i};
    }
    sort(a1.begin(), a1.end());
    sort(b.begin(), b.end());
    sort(b1.begin(), b1.end());

    ll up = n - x, low = 0;
    for (int i = up; i < n; i++)
    {
        if (b1[low++].first >= a1[i].first)
        {
            no;
            return;
        }
    }
    up = 0;
    for (int i = low; i < n; i++)
    {
        if (b1[i].first < a1[up++].first)
        {
            no;
            return;
        }
    }
    yes;
    vector<ll> ans(n);

    up = n - x;
    int tmp = 0;
    for (int i = up; i < n; i++)
    {
        ans[a1[i].second] = b1[tmp++].first;
    }
    tmp = 0;
    for (int i = low; i < n; i++)
    {
        ans[a1[tmp].second] = b1[i].first;
        tmp++;
    }
    for (auto val : ans)
    {
        cout << val << " ";
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}