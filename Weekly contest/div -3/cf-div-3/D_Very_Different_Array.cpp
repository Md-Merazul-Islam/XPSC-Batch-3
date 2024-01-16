
// /**************************************************************
// **               BISMILLAH HIR RAHMAN NIR RAHIM              **
// **                  Author: Md Merazul Islam                 **
// **                         CST, MPI                          **
// **            https://github.com/Md-Merazul-Islam            **
// **************************************************************/
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<ll, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nn "\n"
// #define nl cout << "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
// void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
// template <typename T>
// using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// void mdmerazulislam()
// {
//     int n, m;
//     cin >> n >> m;

//     int a[n], b[m];

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < m; ++i)
//     {
//         cin >> b[i];
//     }

//     sort(a, a + n);
//     sort(b, b + m);

//     int dw = 0, hig = m - 1;
//     int nw = 0, hin = n - 1;
//     int sum = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         int num1 = abs(a[nw] - b[dw]);
//         int num2 = abs(a[nw] - b[hig]);
//         int num3 = abs(a[hin] - b[dw]);
//         int num4 = abs(a[hin] - b[hig]);

//         if (num1 >= num2 && num1 >= num3 && num1 >= num4)
//         {
//             sum += num1;
//             dw++;
//             nw++;
//         }
//         else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
//         {
//             sum += num2;
//             hig--;
//             nw++;
//         }
//         else if (num3 >= num1 && num3 >= num2 && num3 >= num4)
//         {
//             sum += num3;
//             hin--;
//             dw++;
//         }
//         else
//         {
//             sum += num4;
//             hin--;
//             hig--;
//         }
//     }

//     cout << sum << endl;
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
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (ll i = (a); i < (b); ++i)
#define rloop(i, a, b) for (ll i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll hisab(ll x, ll y)
{
    return abs(x - y);
}

void loopin(ll arr[], ll size)
{
    for (ll i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
}

void sortArray(ll arr[], ll size)
{
    sort(arr, arr + size);
}

void handleElseCase(ll &sum, ll &dw, ll &nw, ll &hig, ll &hin, ll a[], ll b[])
{
    ll num4 = hisab(a[hin], b[hig]);
    sum += num4;
    hin--;
    hig--;
}

void mdmerazulislam()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    loopin(a, n);
    loopin(b, m);
    sortArray(a, n);
    sortArray(b, m);
    ll downn = 0, beshi = m - 1;
    ll noton = 0, hiii = n - 1;
    ll sum = 0;

    for (ll i = 0; i < n; ++i)
    {
        ll num1 = hisab(a[noton], b[downn]);
        ll num2 = hisab(a[noton], b[beshi]);
        ll num3 = hisab(a[hiii], b[downn]);

        if (num3 >= num1 && num3 >= num2 && num3 >= hisab(a[hiii], b[beshi]))
        {
            sum += num3;
            hiii--;
            downn++;
        }
        else if (num2 >= num1 && num2 >= num3 && num2 >= hisab(a[hiii], b[beshi]))
        {
            sum += num2;
            beshi--;
            noton++;
        }
        else if (num1 >= num2 && num1 >= num3 && num1 >= hisab(a[hiii], b[noton]))
        {
            sum += num1;
            downn++;
            noton++;
        }
        else
            handleElseCase(sum, downn, noton, beshi, hiii, a, b);
    }
    cout << sum << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
        mdmerazulislam();
    return 0;
}
