
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
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}



void solveTestCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    loop(i,0,n) 
        cin >> a[i];
    
     loop(i,0,n-1) 
    {
        if(abs(a[i]-a[i+1])>1){
            no;return;
        }
    }
    if(abs(a[0]-a[n-1]>1)){
        no;
    }

   yes;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solveTestCase();
    }

    return 0;
}
