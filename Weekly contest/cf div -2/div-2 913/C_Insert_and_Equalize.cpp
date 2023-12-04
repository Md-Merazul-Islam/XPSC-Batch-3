#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the smallest number of operations to make all elements equal
void smallest_operations(int t, vector<pair<int, vector<int>>> testcases) {
    for (int i = 0; i < t; ++i) {
        int n = testcases[i].first;
        vector<int> arr = testcases[i].second;

        // Find the maximum element in the array and calculate the difference
        int max_val = *max_element(arr.begin(), arr.end());
        int diff = max_val - *min_element(arr.begin(), arr.end());

        // Calculate the number of operations needed
        int operations = max(diff / (n - 1), (diff % (n - 1) == 0) ? 0 : 1);

        // Calculate the result
        int result = (n - 1) * operations;

        cout << result << endl;
    }
}

int main() {
    int t;
    cin >> t;
    

    vector<pair<int, vector<int>>> testcases;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        testcases.push_back({n, arr});
    }

    // Calculate and print the smallest number of operations
    smallest_operations(t, testcases);

    return 0;
}
