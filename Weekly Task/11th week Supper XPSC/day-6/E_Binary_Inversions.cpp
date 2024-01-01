
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

ll inversion (vi&a, ll n)
{
    ll one=0, zero=0;
    for (int i=0; i<n ; i++)
    {
        if(a[i]==1)one++;
        else zero+=one;
    }
    return zero;

}
void mdmerazulislam()
{
    int n;cin>>n;
    vi a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    ll  ans =inversion(a,n);
    ll index = -1;
    for (int i=0; i<n; i++)
    {
        if(a[i]==0){
            a[i]=1;
            index=i;break;
        }
    }

    ans= max(ans,inversion(a,n));
    if(index != -1){
        a[index]=0;
    }
    for (int i=n-1; i>=0;i--)
    {
        if(a[i]==1)
        {
            a[i]=0;
            index=i;
            break;
        }
    }
    ans =max(ans,inversion(a,n));
    cout<<ans<<nn;

}

int main()
{
    fast;
    
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}