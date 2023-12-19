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

// ll ans(int n, vi &a, vi &b)
// {
//     vpi v;
//     ll x = 0, cnt = 0;
//     loop(i, 0, n) v.push_back({(a[i] + b[i]) , i});
//     rsrt(v);
//     loop(i, 0, n)
//     {
//         ll tmp = v[i].second;
//         if (cnt % 2 == 1)
//             x -= b[tmp] - 1;
//         else
//             x += a[tmp] - 1;
//         cnt++;
//     }
//     return x;
// }

// void mdmerazulislam()
// {
//     int n;
//     cin >> n;
//     vi a(n), b(n);
//     loop(i, 0, n) cin >> a[i];
//     loop(i, 0, n) cin >> b[i];
//     cout << ans(n, a, b) << endl;
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

ll ans(int n, vi &a, vi &b)
{
    vpi v;
    ll x = 0, cnt = 0;
    loop(i, 0, n) v.push_back({(a[i] + b[i]) , i});
    rsrt(v);
    loop(i, 0, n)
    //  loop(i, 0, n) v.push_back({(a[i] + b[i]) , i});
    // rsrt(v);
    // loop(i, 0, n)
    // {
    //     ll tmp = v[i].second;
    //     if (cnt % 2 == 1)
           
    {
        ll tmp = v[i].second;
        if (cnt % 2 == 1)
            x -= b[tmp] - 1;
        else
            x += a[tmp] - 1;
        cnt++;
    }
    return x;
}

void mdmerazulislam()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    loop(i, 0, n) cin >> a[i];
    loop(i, 0, n) cin >> b[i];
    cout << ans(n, a, b) << endl;
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