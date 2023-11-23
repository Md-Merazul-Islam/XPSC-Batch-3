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
    char c;cin>>c;
    string s;cin>>s;
    bool ok= true;
    for (char ch : s)
    {if(ch!=c)ok =false;}
    if(ok){cout<<0<<endl;return;}
    else{int x = n-1;while(x>=n/2){if(s[x]==c){cout<<1<<nl<<x+1<<nl;return;}x--;}cout<<2<<nl<<n<<" "<<n-1<<nl;}
}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}