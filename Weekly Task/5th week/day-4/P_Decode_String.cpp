/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;
//     string ans = "";
//     string org = "abcdefghijklmnopqrstuvwxyz";
//     for (int i = 0; i < n; i++)
//     {
//         if (i + 2 <= n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
//         {
//             int tmp = ((s[i] - '0') * 10) + (s[i + 1] - '0');
//             ans += ((char)(tmp + 96));
//             i += 2;
//         }
//         else
//         {
//             int tmp = (s[i] - '0');
//             ans += ((char)(96 + tmp));
//         }
//     }
//     cout << ans << endl;
// }

string org = "abcdefghijklmnopqrstuvwxyz";
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i + 2] == '0' && s[i + 3] != '0' && i+2 < n)
        {
            ans +=org[((s[i] - '0') * 10) + (s[i + 1] - '0' - 1)];
                i += 2;
        }
        else
        {
            ans +=org[s[i] - '0' - 1];
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

