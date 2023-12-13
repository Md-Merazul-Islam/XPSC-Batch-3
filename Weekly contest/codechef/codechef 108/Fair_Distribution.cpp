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
    int n;cin>>n;
    string s;cin>>s;

    int one =0, zero =0;
    for (int i=n-1;i>=0; --i)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else{
            zero++;
        }
        if(abs(one-zero)>1)
        {
            cout<<"NO"<<endl;return;
        }
     
        
    }
            cout<<"YES"<<endl;
}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)
    {mdmerazulislam();}
    
    return 0;
}