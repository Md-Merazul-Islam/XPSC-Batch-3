#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> v(n, 1);
        int l = r - n + 1;
        int mx = s - r;
        v[0] = mx;
        for (int i = 1; i < n; i++)
        {
            v[i] += min(l, mx - 1);
            l -= min(l, mx - 1);
        }
        for (auto &val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}