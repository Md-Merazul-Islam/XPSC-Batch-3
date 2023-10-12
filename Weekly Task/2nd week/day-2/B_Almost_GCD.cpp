#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = 0;
    int ans = 2;
    for (int i = 2; i < 1003; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
            {
                cnt++;
            }
        }
            if (cnt >= mx)
            {
                mx = cnt;
                ans = i;
            }
    }
    cout << ans << endl;
    return 0;
}