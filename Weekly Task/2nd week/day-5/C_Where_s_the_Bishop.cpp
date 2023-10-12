#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> g(8+1);
        for (int i = 0; i < 8; i++)
        {
            cin >> g[i];
        }

        int x, y;

        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (g[i][j]=='#'&& g[i - 1][j - 1] == '#' && g[i - 1][j + 1] == '#' && g[i + 1][j - 1] == '#' && g[i + 1][j + 1] == '#')
                {
                    x = i;
                    y = j;
                  
                }
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}
