#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sz;
        cin >> n >> sz;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int min_count = 1e8+2;;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int cnt = 0;
                for (int k = 0; k < sz; k++)
                {
                    cnt += abs(s[i][k] - s[j][k]);
                }
                min_count = min(min_count, cnt);
            }
        }
        cout << min_count << endl;
    }
    return 0;
}