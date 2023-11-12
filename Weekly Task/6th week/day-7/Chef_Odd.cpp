

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
    ll n,k;cin>>n>>k;

    ll odd = (n/2)+(n%2);
    ll extraOdd = odd-k;
    if(n<2*k)
    {
        no;
    }
    else if(n==2*k)
    {
        yes;
    }
    else{
        if(extraOdd %2==0)
        {
            yes;
        }
        else no;
    }

}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}