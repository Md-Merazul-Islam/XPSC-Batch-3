
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
**************************************************************/
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
// bool isVowel(char c) {
//     return (c == 'a' || c == 'e');
// }
void mdmerazulislam()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        if (!isVowel(s[i]) && isVowel(s[i + 1]) && !isVowel(s[i + 2]))
        {
            ans += s[i];
            ans += s[i + 1];
            ans += s[i + 2];
            ans += '.';
            i += 2;
        }
        else
        {
            ans += s[i];   
            ans += s[i + 1];
            ans += '.';
            i++;
        }
    }
    reverse(ans.begin(), ans.end());
    char tmp = ans[0];
    if (tmp == '.')
    {
        loop(i, 1, ans.size()) cout << ans[i] ;nl;
    }

    else

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
        mdmerazulislam();
    }

    return 0;
}