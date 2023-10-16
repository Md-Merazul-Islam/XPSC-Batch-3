#include <bits/stdc++.h>

using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;

//         if ((a < b && c < d && a < c && b < d) ||
//             (c < a && d < b && c < d && a < b) ||
//             (d < c && b < a && d < b && c < a) ||
//             (b < d && a < c && b < a && d < c))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

bool isBeautifulPair(int a, int b, int c, int d)
{
    return (a < b && c < d) || (b < a && d < c);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (isBeautifulPair(a, b, c, d) && isBeautifulPair(a, c, b, d))
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
