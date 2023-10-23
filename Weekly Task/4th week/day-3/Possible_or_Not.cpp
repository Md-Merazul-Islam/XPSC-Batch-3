#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; 
            if ((a[i] & b) == b)
                v.push_back(a[i]);
        }

        if (v.empty())
        {
            cout << "NO" << endl; 
        }
        else
        {
            int ans = v[0];

            for (int i = 1; i < v.size(); i++)
            {
                ans &= v[i];
            }

            if (ans == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
