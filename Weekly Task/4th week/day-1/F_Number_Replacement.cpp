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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;

        map<int, char> mp;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (mp.count(a[i]) && mp[a[i]] != s[i])
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
            else if (mp.count(a[i]) == 0)
            {
                mp[a[i]] = s[i];
            }
        }
        if (!flag)
            cout << "YES" << endl;
    }
    return 0;
}