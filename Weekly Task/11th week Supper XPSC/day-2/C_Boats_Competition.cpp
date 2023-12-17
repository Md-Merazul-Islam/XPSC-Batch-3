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
    ll n,ans=0;
    cin>>n;
    vi a(n+1);
    for(int i=1; i<=n; i++)cin>>a[i];
    srt(a);
    for(int i=1; i<=100; i++)
    {
        ll cnt =0;
        for (ll k=1, j=n; k<j;)
        {
            if(a[k] + a[j] >i)j--;
            else if(a[k] + a[j] <i)k++;
            else{
                cnt++, k++, j--;
            }
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<nl;
}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--){
        mdmerazulislam();
    }
    
    return 0;
}
