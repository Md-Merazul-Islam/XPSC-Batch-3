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
#define loop(i, a, b)for(int i = (a); i < (b); ++i)
#define rloop(i, a, b)for(int i = (a); i <= (b); ++i)
#define nl 			"\n"
#define fast  		ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{
    int n;cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        int tmp;cin>>tmp;mp[tmp]++;
    }
    vector<int>v;
    for(auto it :mp)
    {
        v.push_back(it.second);
    }
    srt(v);
    int ans =INT_MAX;
    for(int i=0; i<mp.size();i++){
        int x = mp.size()-i;
        ans=min(ans,n-(v[i]*x));
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