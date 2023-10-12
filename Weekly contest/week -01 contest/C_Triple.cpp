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
        vector<int>a(n);

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int mx_element = -1;
        
        for (auto m : mp)
        {
            if (m.second >= 3)
            {
                mx_element = m.first;
                break;
            }
        }

        cout << mx_element << endl;
    }
    return 0;
}
