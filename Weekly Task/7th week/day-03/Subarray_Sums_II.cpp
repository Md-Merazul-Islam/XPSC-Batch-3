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
}

int main()
{
    fast;

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    map<ll,ll> frq;
    ll cnt = 0, sum = 0;
    frq[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
        ll cmp= sum -k;
        if(frq.find(cmp)!=frq.end())
        {
            cnt+=frq[cmp];
        }
        frq[sum]++;
    }
    cout<<cnt<<endl;

    return 0;
}