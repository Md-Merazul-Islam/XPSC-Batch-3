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

void mdmerazulislam()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int countVowels = 0;
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            countVowels++;
        }
    }

    if (countVowels % k != 0)
    {
        cout << "0" << endl;
    }
    else
    {
        int ans = nCk(countVowels, k);
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}