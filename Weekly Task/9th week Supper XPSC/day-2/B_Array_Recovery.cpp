/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 			3.14159265359
#define dmin 		1e-9
#define dd 			double
#define ll 			long long
#define yes 		cout<<"YES\n"
#define no 			cout<<"NO\n"
#define pb 			push_back
#define vi 			vector<ll>
#define vpi 		vector<pair<int,int>>
#define srt(a) 		sort(a.begin(),a.end())
#define rsrt(a) 		sort(a.rbegin(),a.rend())
#define nl 			"\n"
#define fast  		ios_base::sync_with_stdio(false),cin.tie(NULL);
#define loop(i, a, b)for(int i = (a); i < (b); ++i)
#define rloop(i, a, b)for(int i = (a); i <= (b); ++i)


void mdmerazulislam()
{
    int n;cin>>n;
    vi a(n);
    loop(i,0,n)cin>>a[i];
    vi ans(n);
    ans[0]= a[0];
    bool ok =false;
    if(n==1)
    {
        cout<<ans[0]<<nl;return;
    }
    for(int i=1; i<n; i++){
        if(ans[i-1]-a[i] <0 || a[i]==0)
        {
            ans[i]= ans[i-1]+a[i];
        }else{
            ok=true;break;
        }
    }
    if(ok)cout<<-1<<nl;
    else {
        loop(i,0,n){cout<<ans[i]<<" ";}
        cout<<nl;
    }

}

int main()
{
    fast;
    
    int t;cin>>t;while(t--)mdmerazulislam();
    
    return 0;
}