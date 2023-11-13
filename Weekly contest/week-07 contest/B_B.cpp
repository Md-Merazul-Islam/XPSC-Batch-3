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

ll chek(char a, char b)
{
    ll dif = abs(a - b);
    return min(dif, 10 - dif);
}

void mdmerazulislam()
{
    ll n, m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;
    ll ans = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        ll move = 0;
        for (int j = 0; j < m; j++)
        {
            move += min(abs(s[i + j] - k[j]), abs(10 - abs(s[i + j] - k[j])));
        }
        ans = min(ans, move);
    }
    cout << ans << endl;
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
