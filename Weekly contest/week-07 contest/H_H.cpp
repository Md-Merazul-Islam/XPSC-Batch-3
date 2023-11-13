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
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define mp map<int, int>
#define st set<int>
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

    bool flag = false;
    if (n % 3 == 1)
    {
        yes;
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            ll x = n, l = -1;
            for (ll j = 0; j < n; j += 3)
            {
                if (s[j] == (i + 'a'))
                {
                    x = j;
                    break;
                }
            }
            for (int j = n - 1; j >= 0; j -= 3)
            {
                if (s[j] == (i + 'a'))
                {
                    l = j;
                    break;
                }
            }
            if (x < l)
                flag = true;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
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