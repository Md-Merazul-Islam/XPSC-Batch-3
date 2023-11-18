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

}

int main()
{
    fast;
    
    int n,b;cin>>n>>b;
   set<ll>set;
    int x,y;
    for( int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
             x=i; 
            y=n/i;
            set.insert(x);
            set.insert(y);
        }
    }
    vector<ll>v;
    v.assign(set.begin(),set.end());
    if(b>v.size())
    {
        cout<<-1<<endl;
    }
    else{
        cout<<v[b-1]<<endl;
    }
    return 0;
}