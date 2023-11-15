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
    map<char, int> map;
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
    }

    for (auto c : map)
    {
        if (c.second % 2 == 1)
        {
            odd++;
        }
        else
            even++;
    }
    if (odd > 1)
    {
        cout << 0 << endl;
    }
    else if (odd == 1)
    {
        if (even == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
    {
        cout << 1 << endl;
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
