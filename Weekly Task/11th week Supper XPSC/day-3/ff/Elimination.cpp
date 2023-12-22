#include <iostream>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();

    // Creating a vector to store indices where 1s occur
    vector<int> ones;
    for (int i = 0; i < n; ++i) {
        if (S[i] == '1') {
            ones.push_back(i);
        }
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int L, R;
        cin >> L >> R;

        // Finding the number of 1s within the range [L-1, R-1]
        int count = upper_bound(ones.begin(), ones.end(), R - 1) - lower_bound(ones.begin(), ones.end(), L - 1);

        cout << count << endl;
    }

    return 0;
}
