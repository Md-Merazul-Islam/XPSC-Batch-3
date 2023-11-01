#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int e = 0, o = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a & 1) {
                o++;  // Count odd numbers
            } else {
                e++;  // Count even numbers
            }
        }

        int ans = 1;
        for (int i = 1; i <= e; i++) {
            ans = (ans ^ 2);  // Equivalent to ans ^= 2;
        }

        ans = (ans - 1 + (o != 0)) ;  // Calculate the final result

        cout << ans << endl;
    }

    return 0;
}
