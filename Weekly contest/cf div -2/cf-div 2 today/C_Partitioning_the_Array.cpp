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
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define zikzak(x, vec) for (auto x : vec)
#define all(v) v.begin(), v.end()
// void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
vi vec;

void meraz(ll n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) 
                vec.pb(i);
            else {
                vec.pb(i);
                vec.pb(n / i);
            }
        }
    }
}

void hwllo(ll arr[], ll n) {
    loop(i,0,n)
        cin >> arr[i];
    
}

void mdmerazulislam()
{
    int n;
    cin >> n;
    ll a[n];
    vec.clear();
    
    meraz(n);
    hwllo(a, n);

    int ans = 1;
    zikzak(d, vec) {
        if (d == n) 
            continue;
        

        map<int, vector<int>> mp;

        for (int j = 1; j <= n; j++) {
            mp[j % d].pb(a[j - 1]);
        }
        int tmp = 0;
        zikzak(x, mp) {
            int pp = 0;
            sort(all(x.second));
            for (int i = 1; i < x.second.size(); i++) pp = __gcd(pp, x.second[i] - x.second[i - 1]);
            tmp =__gcd(tmp, pp);
        }
        if (tmp != 1) 
            ans++;
        
    }

    cout << ans<<nn;
}

int main()
{
    fast;
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}
