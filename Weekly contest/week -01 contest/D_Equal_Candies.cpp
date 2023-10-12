// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//         }
//         int num = *min_element(a.begin(), a.end());
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ans += abs(a[i] - num);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

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

        int num = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < num)
            {
                num = a[i];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += abs(a[i] - num);
        }
        cout << ans << endl;
    }
    return 0;
}