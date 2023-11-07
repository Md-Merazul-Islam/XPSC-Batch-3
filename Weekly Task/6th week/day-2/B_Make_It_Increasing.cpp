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
    int n;cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)cin>>a[i];
    int ans =0;
    for(int i=n-1; i>0; i--)
    {
        if(a[i+1]==0 )
        {
            ans =-1; break;
        }
        while(a[i]>=a[i+1])
        {
            a[i]/=2;
            ans++;
        }
    }
    cout<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
} 