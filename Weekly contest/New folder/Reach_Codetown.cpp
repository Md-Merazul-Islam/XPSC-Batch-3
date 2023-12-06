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

bool isVowel(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void mdmerazulislam()
{
    string s;
    cin >> s;
    string nw = "CODETOWN";
    bool ok = true;
    if (s.size() != 8)
    {
        no;
        return;
    }

    for (int i = 0; i < 8; i++)
    {
        if ((!isVowel(nw[i]) && isVowel(s[i])) || (isVowel(nw[i]) && !isVowel(s[i])))
        {
            no;
            return;
        }
    }yes;
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