#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool flag = false;
        for (pii c : mp)
        {
            if (c.second >= 3)
            {
                cout << c.first << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << -1 << endl;
    }
    return 0;
}