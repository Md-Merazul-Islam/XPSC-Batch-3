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
        string a[3][n + 1];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mp[a[i][j]]++;
            }
        }
        int point[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[a[i][j]] == 1)
                {
                    point[i] += 3;
                }
                else if (mp[a[i][j]] == 2)
                {
                    point[i] += 1;
                }
            }
        }

        for (int val : point)

        {
            cout << val << " " ;
        }
        cout<<endl;
    }

    return 0;
}