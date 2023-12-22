

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 205;
ll dp[N][N][N];

int solve(char X[], char Y[], int n, int m, int k) {
    memset(dp, -1, sizeof(dp));

    dp[0][0][0] = 0;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            for (int p = 0; p <= k; ++p) {
                if (dp[i][j][p] == -1) continue;

                if (i < n && j < m) {
                    int cost = (X[i] != Y[j]);
                    dp[i + 1][j + 1][p + 1] = max(dp[i + 1][j + 1][p + 1], dp[i][j][p] + cost);
                    dp[i + 1][j][p] = max(dp[i + 1][j][p], dp[i][j][p]);
                    dp[i][j + 1][p] = max(dp[i][j + 1][p], dp[i][j][p]);
                }
                
                dp[i + 1][j + 1][p] = max(dp[i + 1][j + 1][p], dp[i][j][p]);
            }
        }
    }

    ll ans = 0;
    for (int p = 0; p <= k; ++p) {
        ans = max(ans, dp[n][m][p]);
    }
    return ans;
}

int main() {
    char X[N], Y[N];
    int n, m, k;
    cin >> n >> m >> k;
    cin >> X >> Y;

    int ans = solve(X, Y, n, m, k);
    cout << ans +1<< endl;

    return 0;
}
