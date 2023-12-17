

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;

    string s;
    cin >> s;

    // const int alph_sz = 'z' - 'a' + 1;

    vector<int> idx;
    vector<vector<int>> letter_idx(26);

    int mx = 0;

    for (int i = 0; i < n; i++) {
        letter_idx[s[i] - 'a'].push_back(i);
        mx = max(mx, s[i] - 'a');
    }

    int last = -1;

    for (int i = 26 - 1; i >= 0; i--) {
        for (int j : letter_idx[i]) {
            if (j > last) {
                idx.push_back(j);
                last = j;
            }
        }
    }

    int m = idx.size();

    string s1 = s;

    for (int i = 0; i < m; i++) {
        s1[idx[i]] = s[idx[m-1-i]];
    }

    if (is_sorted(s1.begin(), s1.end())) {
        cout << (m - letter_idx[mx].size()) << endl;
    } else {
        cout << -1 << endl;
    }
    }

    return 0;
}
