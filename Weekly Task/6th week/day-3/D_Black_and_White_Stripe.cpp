

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define ll long long
#define pq priority_queue
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define in insert
#define vi vector <int>
#define vpi vector<pair<int,int>>
#define mp map<int,int>
#define st set <int>
#define fori for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repeq(i,a,b) for(int i=a;i<=b;i++)
#define srt (v.begin(),v.end())
#define all(v) (v.begin(),v.end())
#define maxe *max_element
#define mine *min_element
#define lb lower_bound
#define ub upper_bound
#define nl "\n"
#define f first
#define s second
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    int ans =0;
    for(int i=0; i<k;i++)
    {
        if(s[i]!='B')
        {
            ans++;
        }
    }
    int mn = ans;

   
    for(int i=k; i<n;i++)
    {
        if(s[i-k]=='W')
        {
            ans--;
        }if(s[i]=='W')
        {
            ans++;
        }
        mn= min(mn,ans);
    }
    cout<<mn<<endl;
    
}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}

