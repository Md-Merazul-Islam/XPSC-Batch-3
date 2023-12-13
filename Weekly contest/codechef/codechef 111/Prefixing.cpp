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

// void mdmerazulislam()
// {
//     ll n;
//     cin >> n;
//     vi a(n), ans(n);
//     loop(i, 0, n) cin >> a[i];
//     unordered_map<int, int> mp;
//     loop(i, 0, n)
//     {
//         if (mp.find(a[i]) == mp.end())
//         {
//             ans.push_back(a[i]);
//             mp[a[i]]++;
//         }
//     }
//     sort(ans.begin(), ans.end());
//     vi fn;
//     loop(i, 0, n)
//     {
//         auto it = lower_bound(ans.begin(), ans.end(), a[i]);
//         fn.push_back(*it);
//         cout << *it << " ";
//     }
//     // sort(fn.begin(),fn.end());
//     // for (int val : fn)
//     // {
//     //     cout << val << " ";
//     // }
//     cout << nl;
// }

void mdmerazulislam()
{
    ll m;
    cin >> m;

    vector<ll> P(m);
    for (ll i = 0; i < m; ++i)
    {
        cin >> P[i];
    }

    vector<ll> L(m + 1);
    ll z = 0;
    for (ll i = 1; i <= m; ++i)
    {
        L[i] = P[i - 1];
        z = max(L[i], z);
    }

    unordered_set<ll> B;
    for (ll i = 1; i <= m; ++i)
    {
        if (B.find(L[i]) != B.end())
        {
            cout << z << " ";
        }
        else
        {
            cout << L[i] << " ";
        }
        B.insert(L[i]);
    }
    cout << endl;
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