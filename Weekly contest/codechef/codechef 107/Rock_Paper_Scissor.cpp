

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repeq(i, a, b) for (int i = a; i <= b; i++)
#define srt (v.begin(), v.end())
#define all(v) (v.begin(), v.end())
#define maxe *max_element
#define mine *min_element
#define lb lower_bound
#define ub upper_bound
#define nl "\n"
#define f first
#define s second
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'P')
        {
            if (b[i] == 'R')
                cnt1++;

            else if (b[i] == 'S')
                cnt2++;
        }
        else if (a[i] == 'R')
        {
            if (b[i] == 'P')
                cnt2++;

            else if (b[i] == 'S')
                cnt1++;
        }
        else
        {
            if (b[i] == 'R')
                cnt2++;

            else if (b[i] == 'P')
                cnt1++;
        }
    }
    // cout << cnt1 << " " << cnt2 << endl;
    if (cnt1 > cnt2)
    {
        cout << 0 << endl;
    }
    else if (cnt1 == cnt2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << (cnt2 - cnt1) / 2 + 1 << endl;
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




