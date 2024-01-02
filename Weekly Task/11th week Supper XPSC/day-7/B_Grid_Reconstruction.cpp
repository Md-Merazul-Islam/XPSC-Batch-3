
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
    int a[2][n+1];
    a[0][1]=2*n;
    a[1][n]=(2*n)-1;
    int cur =1;
    for(int i=1; i<=n; i++){

            a[i%2][i]=cur;
            cur++;    
    }
    cur =(2*n)-2;
    for(int i=3; i<=n; i+=2){
        a[0][i]=cur;
        a[1][i-1]=cur-1;
        cur-=2;
    }
    for(int i=0; i<2; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        nl;
    }
}

int main()
{
    fast;
    
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}



