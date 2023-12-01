#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

void min_erased_symbols(int t, vector<pair<int, string>>& test_cases) {
    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first;
        string s = test_cases[i].second;
        unordered_map<char, pair<int, int>> freq;

        for (int j = 0; j < n; ++j) {
            if (freq.find(s[j]) == freq.end()) {
                freq[s[j]] = make_pair(j, j);
            } else {
                freq[s[j]].second = j;
            }
        }

        int min_deletions =1e9+4;
        bool possible = false;

        for (auto& it : freq) {
            if (it.second.first != it.second.second) {
                possible = true;
                int deletions = n - (it.second.second - it.second.first + 1);
                min_deletions = min(min_deletions, deletions);
            }
        }

        if (!possible) {
            cout << -1 << endl;
        } else {
            cout << min_deletions << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, string>> test_cases(t);
    for (int i = 0; i < t; ++i) {
        int n;
        string s;
        cin >> n >> s;
        test_cases[i] = make_pair(n, s);
    }

    min_erased_symbols(t, test_cases);

    return 0;
}
