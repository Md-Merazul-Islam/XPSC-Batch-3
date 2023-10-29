#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int left = -1, right = -1;

        // for left value
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (x < a[mid]) {
                right = a[mid];
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        // for right value
        l = 0;
        r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (x > a[mid]) {
                left = a[mid];
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        if (left == -1) {
            cout << "X ";
        } else {
            cout << left << " ";
        }
        if (right == -1) {
            cout << "X" << endl;
        } else {
            cout << right << endl;
        }
    }
    return 0;
}
