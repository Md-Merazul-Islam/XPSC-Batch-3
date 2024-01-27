
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
#define pii pair<ll,ll> 
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i,0, a.size()) cin >> a[i]
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 +5;
void hello_wrold_solve_here()
{
    
    ll n,k,m;cin>>n>>k>>m;
    string s,ss;
    cin>>s;
    map<char,int>mp;
    for (auto i : s)if(k>(int)(i)-'a')ss.pb(i);
    if(ss.empty()){
        no;loop(i,0,n)cout<<'a',nl;return; 
    }
    string fine;
    ll cont=0;
    for(auto i : ss)
    {
        mp[i]++;if(mp.size()==k)
            fine.pb(i),cont++,mp.clear();
        
    }
    if(cont>=n){yes;return;}
    else no;
    if(mp.empty()){
        while(fine.size()<n)fine.pb(ss[ss.size()-1]);
        cout<<fine<<line;return;
    }
    char ans;
    for (char i =97; i<'a'+k; i++)
    {
        if(mp[i]==0){
            ans=i; break;
        }
    }
    while(fine.size()<n)fine.pb(ans);
    cout<<fine<<line;
}


signed main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_wrold_solve_here();
    return 0;
}