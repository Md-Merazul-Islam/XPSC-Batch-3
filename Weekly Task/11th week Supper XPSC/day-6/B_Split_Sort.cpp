
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
**************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)


void mdmerazulislam()
{
    int n;cin>>n;
    vi a(n+1,0),mp(n+1,0);
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    ll ans =0;
 
    for (int i=1; i<=n;i++ ){
        if(mp[i-1] > mp[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    fast;
    
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}