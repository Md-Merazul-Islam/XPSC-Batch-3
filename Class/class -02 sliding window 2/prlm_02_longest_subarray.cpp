#include <bits/stdc++.h>

using namespace std;

int lenOfLongSubarr(int a[], int n, int s) {
        long long sum = 0;
        map<int, int> mp;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (mp.find(sum - s) != mp.end()) {
                mx = max(mx, i - mp[sum - s]);
            }

            if (mp.find(sum - s) == mp.end()) {
                mp[sum] = i;
            }
        }
        return (mx == INT_MIN) ? 0 : mx; // Return 0 if mx is still INT_MIN
    }