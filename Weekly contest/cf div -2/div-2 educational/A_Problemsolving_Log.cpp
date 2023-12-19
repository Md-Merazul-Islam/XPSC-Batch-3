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
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vi frq(27);
//     for (int i = 0; i < 26; ++i)
//         frq[i] = i + 1;
//     int cnt = 0;
//     for (char c : s)
//     {
//         frq[c - 'A']--;
//         if (frq[c - 'A'] == 0)
//             cnt++;
//     }
//     cout << cnt << nl;
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

void mdmerazulislam()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi frq(27);
    iota(frq.begin(),frq.end(),1);
    
    int cnt = 0;
    for (char c : s)
    {
        if (--frq[c - 'A'] == 0)
            cnt++;
    }
    cout << cnt << nl;
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