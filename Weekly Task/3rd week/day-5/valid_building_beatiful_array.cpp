
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
        vector<int> odd, even;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        bool flag_odd = true, flag_even = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                continue;

            if (odd.empty() || odd[0] >= a[i])
            {
                flag_even = false;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                continue;
            if (odd.empty() || odd[0] >= a[i])
            {
                flag_odd = false;
                break;
            }
        }

        if (flag_even || flag_odd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
