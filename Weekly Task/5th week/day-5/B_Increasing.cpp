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
    int n;cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }

    sort(a.begin(),a.end());
    bool falg = true;
    for (int i=0; i<n; i++)
    {
        if(a[i]==(a[i+1]))
        {
            falg  =false;
            break;
        }
    }
    cout<<(falg ? "YES": "NO")<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)solve();
    
    return 0;
}