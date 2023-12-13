#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long countGoodSubarrays(vector<int>& arr) {
    int n = arr.size();
    long long goodSubarrays = n; // All single elements are good subarrays
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(arr[i] - arr[i - 1]);
        int maxAllowedDiff = min(i + 1, n - i);
        
        if (diff > maxAllowedDiff) {
            break;
        }
        
        goodSubarrays++;
    }
    
    return goodSubarrays;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        long long result = 0;
        for (int i = 0; i < N; ++i) {
            vector<int> subarray(arr.begin() + i, arr.end());
            result += countGoodSubarrays(subarray);
        }

        cout << result << endl;
    }

    return 0;
}
