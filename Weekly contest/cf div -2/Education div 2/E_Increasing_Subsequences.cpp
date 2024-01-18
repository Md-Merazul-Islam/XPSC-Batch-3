#include <iostream>
#include <vector>

using namespace std;

vector<int> calculateIncreasingSequence(int n) {
    vector<int> sequence;
    int incSubseqNum = 1;
    int idx = 0;

    while (n >= incSubseqNum) {
        n -= incSubseqNum;
        incSubseqNum *= 2;
        sequence.push_back(idx);
        ++idx;
    }

    return sequence;
}

vector<int> calculateRemainingBits(int n) {
    vector<int> remainingBits;
    int idx = 10000;

    while (n != 0) {
        if (n >= (1 << idx)) {
            remainingBits.push_back(idx);
            n -= (1 << idx);
        }
        --idx;
    }

    return remainingBits;
}

vector<int> calculateOutput(int n) {
    vector<int> outAns = calculateIncreasingSequence(n);

    vector<int> remainingBits = calculateRemainingBits(n);
    outAns.insert(outAns.end(), remainingBits.begin(), remainingBits.end());

    return outAns;
}

void solveTestCases() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<int> outAns = calculateOutput(n);

        cout << outAns.size() << "\n";

        for (int j : outAns) {
            cout << j << " ";
        }

        cout << "\n";
    }
}

int main() {
    solveTestCases();

    return 0;
}
