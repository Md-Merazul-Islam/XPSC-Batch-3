

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

int t, n, a[1007], l, r, p, q, i, s, pi, qi;

void mdmerazulislam()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (r = n - 1, l = p = s = q = pi = qi = 0; l <= r; s++)
        {
            if (s & 1)
            {
                for (qi = 0; l <= r && qi <= pi; r--)
                    qi += a[r];
                q += qi;
            }
            else
            {
                for (pi = 0; l <= r && pi <= qi; l++)
                    pi += a[l];
                p += pi;
            }
        }
   
        cout<<s<<" "<<p<<" "<<q<<" ";
    }
}


int main()
{
    fast;

    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}