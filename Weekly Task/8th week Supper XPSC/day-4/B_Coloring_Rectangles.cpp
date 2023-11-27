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
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define fori(i, a, b) for (int i = (a); i < (b); ++i)
#define repi(i, a, b) for (int i = (a); i <= (b); ++i)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = n * m;
        if (ans % 3 == 0)
            cout << ans / 3 << endl;
        else
            cout << (ans / 3)+1 << endl;
    }

    return 0;
}
