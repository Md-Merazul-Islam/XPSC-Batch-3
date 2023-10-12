#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Initialize counters for 'R', 'B', and 'W' cells.
        int red_count = 0;
        int blue_count = 0;
        int white_count = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                red_count++;
            } else if (s[i] == 'B') {
                blue_count++;
            } else {
                white_count++;
            }
        }

        // Check if it's possible to make the picture.
        // Conditions:
        // 1. At least one cell of each color (R, B, W) must be present.
        // 2. If there are both red and blue cells, there must be at least one white cell.
        if ((red_count > 0 && blue_count > 0) || (red_count > 0 && white_count > 0) || (blue_count > 0 && white_count > 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
