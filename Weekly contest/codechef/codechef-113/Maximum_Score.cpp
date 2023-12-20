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
//     int n;
//     cin >> n;
//     vector<ll> a(n);
//     ll one = 0, zr = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//         if (a[i] == 0)
//         {
//             zr++;
//         }
//         else
//             one++;
//     }
//     // vector<ll> ans;
//     // for (int i = 1; i < n; i += 2) {
//     //     ans.push_back(abs(a[i] - a[i - 1]));
//     // }
//     // ll mx = *max_element(ans.begin(), ans.end());
//     // cout << mx << endl;

//     if (one % 2 == 0)
//         cout << 0 << endl;
//     else
//         cout << 1 << endl;
// }

void mdmerazulislam()
{
    ll n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    stack<ll> st;
    ll mx = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (st.empty())
            st.push(a[i]);
        else
        {
            if (st.top() == a[i])
                st.push(a[i]);
            else
            {
                st.pop();
                mx++;
            }
        }
    }
    cout << mx << endl;
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