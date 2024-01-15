
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**            https://github.com/Md-Merazul-Islam            **
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void mdmerazulislam()
{
}

int main()
{
    fast;
    my_ordered_set<int> pbds;
    pbds.insert(5);
    pbds.insert(3);
    pbds.insert(4);
    pbds.insert(2);
    pbds.insert(1);
    pbds.insert(3);
    pbds.insert(2);
    for (auto val : pbds)
    {
        cout << val << ' ';
    }
    nl;
    cout<<pbds.order_of_key(1)<<' ';// it's wlll give count of less then element of k
    nl;
    cout<<*pbds.find_by_order(2)<<" ";// it will give the value of K <<note : most important thing is (*) dereferance>>

    return 0;
}