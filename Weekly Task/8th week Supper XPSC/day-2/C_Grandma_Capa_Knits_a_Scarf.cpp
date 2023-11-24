/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1e9;
    for (int i = 0; i < 26; i++)
    {
        int cur = 0, l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
                l++, r--;
            else if (s[l] == i + 'a')
                l++, cur++;
            else if (s[r] == i + 'a')
                r--, cur++;
            else
            {
                cur = n + 1;
                break;
            }
        }
        ans = min(ans, cur);
    }
    if (ans == n + 1)
        cout << -1 << nl;
    else
        cout << ans << nl;
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
