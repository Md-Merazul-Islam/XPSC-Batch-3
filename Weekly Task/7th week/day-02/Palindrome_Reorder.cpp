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
    string s;
    cin >> s;
    map<char, int> frq;
    for (auto c : s)
    {
        frq[c]++;
    }
    string l = "", r = "", mid = "";
    for (auto it : frq)
    {
        if (it.second % 2 == 0)
        {
            string tmp(it.second / 2, it.first);
            l += tmp;
            r = tmp + r;
        }
        else
        {
            if (!mid.empty())
            {
                cout << "NO SOLUTION\n";
                return;
            }
            mid = string(it.second, it.first);
        }
    }
    cout << l + mid + r << endl;
}

int main()
{
    fast;

    mdmerazulislam();

    return 0;
}