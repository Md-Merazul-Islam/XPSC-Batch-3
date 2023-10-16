
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n - 1];
        map<int, int> mp;
        int last = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (j == n - 2)
                {
                    if (mp[a[i][j]] >= 1)
                    {
                        last = a[i][j];
                    }
                    mp[a[i][j]]++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i][n - 2] != last)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    cout << a[i][j] << " ";
                }
                break;
            }
        }
        cout << last << endl;
    }

    return 0;
}