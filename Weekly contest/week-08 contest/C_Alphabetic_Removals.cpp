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

// void mdmerazulislam()
// {
// }

// int main()
// {
//     fast;

//     int n, k;
//     cin >> n >> k;
//     string s;
//     cin >> s;
//     int op = 0;
//     string ans = "";
//     // multiset<char> st, set;
//     // for (char c : s)
//     // {
//     //     st.insert(c);
//     // }

//     // for (char c : st)
//     // {
//     //     if (k)
//     //     {
//     //         set.insert(c);
//     //         k--;
//     //     }
//     //     else
//     //     {
//     //         break;
//     //     }
//     // }

//     // for (char c : set)
//     // {
//     //     auto ind = set.find(c);
//     //     if (ind != set.end())
//     //     {
//     //         set.erase(ind);
//     //     }
//     //     else
//     //     {
//     //         ans += c;
//     //     }
//     // }

//     // cout << ans << nl;
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

void mdmerazulislam()
{
}

int main()
{
    fast;

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int op = 0;
    string ans = "";
    vector<pair<char, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({s[i], i});
    }
    srt(v);
    for (int i = 0; i < k; i++)
    {
        int ind = v[i].second;
        s[ind] = ' ';
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            cout << s[i];
        }
    }
    cout << nl;
}