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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<int, string>> move(n);
        for (int i = 0; i < n; i++)
        {
            cin >> move[i].first >> move[i].second;
        }
        vector<int> v = a;
        for (int i = n - 1; i >= 0; i--)
        {
            int mf = move[i].first;
            string ms = move[i].second;
            for (char c : ms)
            {
                if (c == 'D')
                {
                    v[i] = (v[i] + 1) % 10;
                }
                else
                {
                    v[i] = (v[i] - 1) % 10;
                }
            }
        }

        for (auto val : v)
        {
            if (val < 0)
            {
                cout << val + 10<<" " ;
            }
            else
            {
                cout << val << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9