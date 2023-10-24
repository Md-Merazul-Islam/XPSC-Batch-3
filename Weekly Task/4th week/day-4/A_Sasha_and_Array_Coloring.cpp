
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int max_cost = 0;
        int l=0, r= n-1;
        while(l<r)
        {
            max_cost+=(a[r]-a[l]);
            l++;r--;
        }
        cout << max_cost << endl;
    }

    return 0;
}
