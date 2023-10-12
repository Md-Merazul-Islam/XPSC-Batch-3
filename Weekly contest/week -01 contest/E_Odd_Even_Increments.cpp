
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
        {
            cin >> a[i];
        }
        int a1 = a[0] % 2;
        int a2 = a[1] % 2;
        bool flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % 2 != a1)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            for (int i = 1; i < n; i += 2)
            {
                if (a[i] % 2 != a2)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
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