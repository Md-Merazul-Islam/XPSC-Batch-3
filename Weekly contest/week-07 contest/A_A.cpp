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
    int n = 3;
    vector<int> a1(n);
    vector<int> a2(n);
    for (int i = 0; i < n; i++)
        cin >> a1[i];
    for (int i = 0; i < n; i++)
        cin >> a2[i];

    sort(a1.rbegin(), a1.rend());
    sort(a2.rbegin(), a2.rend());

    int alic = a1[0] * 100 + a1[1] * 10 + a1[2];
    int bob = a2[0] * 100 + a2[1] * 10 + a2[2];
    if (alic > bob)
    {
        cout << "Alice\n";
    }
    else if (alic < bob)
    {
        cout << "Bob\n";
    }
    else
    {
        cout << "Tie\n";
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
