// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, x, z;
//         cin >> n >> x >> z;

//         vector<int> gifts(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> gifts[i];
//         }

//         int totalSum = 0;
//         for (int i = 0; i < n; ++i) {
//             totalSum += gifts[i];
//         }

//         if (totalSum <= x) {
//             cout << "1" << endl;
//         } else {
//             int remainder = (x - z % x) % x;

//             vector<vector<int>> dp(n + 1, vector<int>(remainder + 1, INT_MAX - 1));
//             dp[0][0] = 0;

//             for (int i = 1; i <= n; ++i) {
//                 for (int j = 0; j <= remainder; ++j) {
//                     if (j < gifts[i - 1]) {
//                         dp[i][j] = dp[i - 1][j];
//                     } else {
//                         dp[i][j] = min(dp[i - 1][j], 1 + dp[i - 1][(j - gifts[i - 1]) % x]);
//                     }
//                 }
//             }

//             if (dp[n][remainder] == INT_MAX - 1) {
//                 cout << "-1" << endl;
//             } else {
//                 cout << dp[n][remainder] << endl;
//             }
//         }
//     }

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s="EEEEEFEEEEFEEEEFEEEEEEEFEEEEFEEE";
    int count_f =0;
    for (char c: s)
    {
        if(c=='F')
        count_f++;
    }
    cout<<"Answer is : "<<count_f<<endl;
    return 0;
}