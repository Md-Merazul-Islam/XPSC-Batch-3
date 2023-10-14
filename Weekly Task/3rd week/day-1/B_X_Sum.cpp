#include <bits/stdc++.h>

using namespace std;
vector<int> dir = {-1, 1};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int cur_sum = a[i][j];
             

                for (int dx : dir)
                {
                    for (int dy : dir)
                    {
                        int x = i + dx;
                        int y = j + dy;

                        while (x >= 0 && x < n  && y>= 0 && y < m )
                        {
                            cur_sum+=a[x][y];
                            x+=dx;
                            y+=dy;
                        }
                    }
                    mx = max(mx, cur_sum);
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
