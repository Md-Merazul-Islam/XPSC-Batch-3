#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    bool used[n + 6];
    memset(used, 0, sizeof(used));

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int m = a[n - 1];
    int k = -1;

    for (int i = 0; i < n - 1; i++) {
        if (!used[i] && m % a[i] == 0) {
            used[i] = true;
        } else {
            k = i;
        }
    }

    if (k != -1) {
        cout<<m<<" "<<a[k];
    } else {
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == a[i - 1]) {
                printf("%d %d\n", m, a[i]);
                break;
            }
        }
    }

    return 0;
}
