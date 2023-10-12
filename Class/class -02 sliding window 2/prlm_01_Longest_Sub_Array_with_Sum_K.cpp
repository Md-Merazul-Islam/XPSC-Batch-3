#include <bits/stdc++.h>

using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long s)
{
    // Write your code here

    int n = a.size();
    int i = 0, j = 0;
    long long sum = 0;
    int mx = INT_MIN;
    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            mx = max(mx, j - i + 1);
        }

        j++;
    }
    return mx;
}