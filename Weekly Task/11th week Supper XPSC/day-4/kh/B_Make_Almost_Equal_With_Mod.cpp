
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans = -1;  long long j = 2;
        while (j <= 1e18) {
            unordered_set<long long> s;
            for (int i = 0; i < n; i++) {
                s.insert(a[i] % j);
            }
            if (s.size() == 2) {
                ans = j;
                break;
            }
            j *= 2;
        }
        cout << ans << endl;
    }

    return 0;
}
