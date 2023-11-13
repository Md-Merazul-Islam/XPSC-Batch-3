#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define in insert
#define vi vector <int>
#define vpi vector<pair<int,int>>
#define mp map<int,int>
#define st set <int>
#define fori for(int i=0;i<n;i++)
#define srt v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define nl "\n"
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{
    int n;cin>>n;
    vector<int>a(n),d(n);
    unordered_map<int,int>mm;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mm[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        cin>>d[i];
        mm[d[i]]++;
    }
    int ans =INT_MIN;
    for (auto val : mm)
    {
        ans = max(ans, val.second);
    }
    cout<<ans<<endl;
}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}