/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
const ll mod = 1e9 + 7;

void mdmerazulislam()
{
    ll n, k;
    cin >> n >> k;
    ll pr = 1, ans = 0;
  
        for (int i = 0; i <31; i++)
        {
            if (k & (1 << i)){
                ans= (pr+ans)%mod;
            }
            pr*=n;
            pr%=mod;
        }
    
    cout<<ans<<endl;
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