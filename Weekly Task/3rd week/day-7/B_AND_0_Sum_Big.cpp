#include <bits/stdc++.h>
#define ll long long

using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        int ans = 1;
        for (int i = 0; i < k; i++)
        {
            ans = (ans * n) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}