#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<double, int> mp;
        long long ans = 0;
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i], ans += mp[log2(a[i]) - a[i]]++;
        cout << ans << '\n';
    }
}