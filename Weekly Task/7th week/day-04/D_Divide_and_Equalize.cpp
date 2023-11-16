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
    int n; cin>>n; 
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];

    int l=0,r= INT_MAX;
    bool flag =false;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        dd ans = 1.0;
        for (int i=0; i<n ;i++)
        {
            dd tmp = (double) a[i]/mid;
            ans*= tmp;
        }
        if(fabs(ans-1.0) < 1e-15){
            flag = true;break;
        }
        if(ans > 1.0)
        {
            l = mid+1;
        }
        else{
            r= mid-1;
        }
    }
    cout<<(flag?"YES":"NO")<<endl;
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