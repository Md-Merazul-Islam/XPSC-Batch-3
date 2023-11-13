

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define ll long long
#define dd double
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
    int online, offline;
    cin >> online >> offline;
    if (online == offline)
    {
        cout << "ONLINE" << endl;
        return;
    }
    double ans = online - (online * (10.0 / 100.0));
    if (abs(ans - offline) < 1e-9)
    {
        cout << "EITHER" << endl;
    }
   else if (ans < offline)
    {
        cout << "ONLINE" << endl;
    }
    else
    {
        cout << "DINING" << endl;
    }
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }
    return 0;
}