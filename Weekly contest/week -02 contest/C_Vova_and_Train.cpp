// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll l, v, x, y;
//         cin >> l >> v >> x >> y;
//         ll ans = 0;
//         for (ll i = 1; i <=l; i++)
//         {
//             if (i % v == 0 && (i < x || i > y))
//             {
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, v, x, y;
//         cin >> l >> v >> x >> y;
//         int ans = l / v;
//         if (x % v == 0 && y % v == 0)
//         {
//             ans -= (y - x) / v + 1;
//         }
//         else
//         {
//             ans -= (y - x) / v;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll L, v, l, r;
        cin >> L >> v >> l >> r;

        ll tmp1 = L / v;
        ll tmp = r / v - (l - 1) / v;

        ll ans = tmp1 - tmp;

        cout << ans << endl;
    }

    return 0;
}
