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
    ll n;
    cin >> n;
    if (n == 1)
        cout << -1 << endl;
    else if( n<= 1000000)
    {
        cout<<1<<" "<<n-1<<" "<<1<<endl;
    }
    else if (n%1000000==0)
    {
        cout<<(n/1000000)-1<<" "<<1000000<<" "<<1000000<<endl;
    }
    else
    {
       
        cout << (n/1000000) << " " << 1000000 << " " << n%1000000 << endl;
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