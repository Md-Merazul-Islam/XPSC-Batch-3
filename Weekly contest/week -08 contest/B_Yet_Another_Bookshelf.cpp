/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

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
#define vpi vector<pair<int,int>>
#define fori for(int i=0;i<n;i++)
#define srt v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define nl "\n"
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{
    int n; cin>>n;
    vector<int>v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    int l=-1, r=-1;
    int ans =0;
    for (int i=0; i<n; i++ )
    {
        if(v[i]==1 ){
            if(l==-1)
            {
                l=i;
            }
            r=i;
        }
    }
    for(int i=l; i<=r; i++)
    {
        if(v[i]==0)
        {
            ans++;
        }
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