
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**            https://github.com/Md-Merazul-Islam            **
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define revs(a) reverse(a.begin(), a.end())
#define all(a)  a.begin(), a.end()
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void chk(vi&a)
{
    if(find(all(a),1)-a.begin()<a.size() && find(all(a),3)-a.begin()<a.size() ){
        swap(a[find(all(a),1)-a.begin()],a[find(all(a),3)-a.begin()]);
        for(auto val : a)cout<<val<<' ';
        nl;
        // cout<<-1<<endl;
    }else cout<<-1<<line;

}

void mdmerazulislam()
{
    ll n;cin>>n;
    vi a(n);
    loop(i,0,n)cin>>a[i];
    if(n<=2)cout<<-1<<line;
    else chk(a);

}

int main()
{
    fast;
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}