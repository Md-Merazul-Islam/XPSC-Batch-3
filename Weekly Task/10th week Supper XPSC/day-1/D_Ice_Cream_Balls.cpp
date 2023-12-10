#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll binarySearch(ll n) {
    ll l = 2, r = 2e9+1, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll val = mid * (mid - 1) / 2;
        if (val == n) return mid;
        if (val<= n) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

void mdmerazulislam() {
    ll n;
    cin >> n;
    ll ans = binarySearch(n);
    
    ll restult = n-(ans*(ans-1)/2);
    cout<<ans+ restult<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        mdmerazulislam();
    }
    
    return 0;
}
