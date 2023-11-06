/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/


#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int,int>
#define pl pair<ll,ll>
#define f first
#define scd second 
#define pb push_back
using namespace std;

void mdmerazulislam()
{
    int n,m,l;
    cin>>n>>m>>l;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        if(y==l)
        {
            v.pb(x);
        }
    }
    sort(v.rbegin(),v.rend());
    ll sum =0;
    if(v.size()<m){
        cout<<-1<<endl;
    }else{
        for(int i=0; i<m; i++)
        {
            sum +=v[i];
        }
        cout<<sum<<endl;
    }
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--)
    {
        mdmerazulislam();
    }
    
    return 0;
}