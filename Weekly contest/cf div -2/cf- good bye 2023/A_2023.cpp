
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
    int n,k;cin>>n>>k;
    int s=1;
    for (int i=0; i<n; i++){
    int x;cin>>x;
    s*=x;
    }
    if(2023%s==0){
        yes;
        cout<<2023/s<<" ";
        for (int i=1; i<k; i++){
            cout<<1<<" ";
        }
        nl;
    }
    else no;
}

int main()
{
    fast;

        int t;
        cin >> t;
        while (t--)mdmerazulislam();

    return 0;
}

