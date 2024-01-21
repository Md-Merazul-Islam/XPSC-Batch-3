
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<ll, ll>>
#define pii pair<ll, ll>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bool isprime(ll n){if (n < 2)return false;for (int i = 2; i * i <= n; i++){if (n % i == 0){return false;}}return true;}
const int N = 2e5 + 5;


void hello_wrold_solve_here()
{
    ll n;
    cin >> n;
    vector<bool> prime(n + 1);
    if(n==2)cout<<-1<<endl;
    else{
        ll ok = n-2;
        if(ok%2==0){
            cout<<-1<<endl;return;
        }
        else{
            if(isprime(ok)){
                cout<<2<<" "<<ok<<endl;
            }
            else cout<<-1<<endl;
        }
    }
   
}

int32_t main()
{
    fast;
    int t = 1;
    // cin>>t;
    while (t--)
        hello_wrold_solve_here();
    return 0;
}