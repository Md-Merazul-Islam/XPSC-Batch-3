// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int st, ed;
//         cin >> st >> ed;
//         int sum = 0;
//         int i;
//         for ( i = st; i <= ed; i++)
//         {
//             sum += a[i];
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int st, ed;
        cin >> st >> ed;

        int prx[n];
        prx[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            prx[i] = prx[i - 1] + a[i];
        }
        if (st == 0)
        {
            cout << prx[ed] << endl;
        }
        else
        {
            cout << prx[ed] - prx[st-1] << endl;
        }
    }

    return 0;
}