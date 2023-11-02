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

void solve()
{
    int n,h,m;cin>>n>>h>>m;
    int ans =INT_MAX;
    while(n--)
    {
        int ah,bm; cin>>ah>>bm;
        int mint = m, hours = h;
        int cnt =0;
        while(true)
        {
            if(ah==hours && bm == mint)break;
            cnt++;
            mint++;
            if(mint==60)
            {
                mint =0;
                hours++;
                if(hours==24)
                {
                    hours=0;
                }
            }
        }
        ans=min(ans,cnt);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}