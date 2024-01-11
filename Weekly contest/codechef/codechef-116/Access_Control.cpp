
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
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }

void mdmerazulislam()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll swp = 0;
    bool ans = false;
    if(s[0]=='1')swp=k;
    else {
        no;return;
    }

    for (char c : s)
    {
        if (c == '0')
        {
           if(swp==0)
           {
            no;return;
           }else swp--;
            
        }
        else swp=k;
    }

 
   
       yes;
    
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();
    return 0;
}