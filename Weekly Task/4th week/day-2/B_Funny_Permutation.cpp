#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 3) {
            cout << "-1" << endl;
        } else if (n == 5) {
            cout << "5 4 1 2 3" << endl;
        } else {
            vector<int> v(n + 1);
            for (int i = 1; i <= n; i++) {
                v[i] = (n-i+1);
            }

            if (n % 2 == 1) {
                swap(v[n/2], v[(n/2)+1]);
            }

            for (int i = 1; i <= n; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
