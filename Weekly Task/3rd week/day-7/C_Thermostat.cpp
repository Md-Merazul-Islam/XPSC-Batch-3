// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll l, r, x;
//         cin >> l >> r >> x;
//         ll a, b;
//         cin >> a >> b;
//         if (a == b)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         if (abs(a - b) >= x)
//         {
//             cout << 1 << endl;
//             continue;
//         }
//         if (b > a)
//         {
//             if (b + x <= r || a - x >= l)
//             {
//                 cout << 2 << endl;
//             }
//             else if (a + x <= r && b - l >= x)
//             {
//                 cout << 3 << endl;
//             }
//             else
//             {
//                 cout << -1 << endl;
//             }
//         }
//         else
//         {
//             if (a + x <= r || b - x >= 1)
//             {
//                 cout << 2 << endl;
//             }
//             else if (a - x >= 1 && r - b >= x)
//             {
//                 cout << 3 << endl;
//             }
//             else
//             {
//                 cout << -1 << endl;
//             }
//         }
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
        ll l, r, x;
        cin >> l >> r >> x;
        ll a, b;
        cin >> a >> b;

        ll d1 = abs(a - l);
        ll d2 = abs(r - a);
        ll d3 = abs(b - l);
        ll d4 = abs(r - b);

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (abs(a - b) >= x)
            cout << 1 << endl;
        else if ((d1 < x && d2 < x) || (d3 < x && d4 < x))
            cout << -1 << endl;
        else
        {
            if (d1 < x)
            {
                if (d4 >= x)
                    cout << 2 << endl;
                else
                    cout << 3 << endl;
            }
            else if (d2 < x)
            {
                if (d3 >= x)
                    cout << 2 << endl;
                else
                    cout << 3 << endl;
            }
            else
                cout << 2 << endl;
        }
    }
    return 0;
}