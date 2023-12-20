#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n);
        long long sumBeforeOperations = 0, maxElement = INT_MIN, minElement = INT_MAX;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sumBeforeOperations += arr[i];
            maxElement = max(maxElement, (long long)arr[i]);
            minElement = min(minElement, (long long)arr[i]);
        }

        long long sumAfterOperations = sumBeforeOperations + ((n - 1) * m);
        long long minOperations1 = (sumAfterOperations - sumBeforeOperations + m - 1) / m;
        long long minOperations2 = maxElement - minElement;

        cout << min(minOperations1, minOperations2) << endl;
    }

    return 0;
}
