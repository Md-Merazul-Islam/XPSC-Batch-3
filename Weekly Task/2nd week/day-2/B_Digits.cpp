// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> v;
//     while (n > 0)
//     {
//         int val = n / k;
//         if (val % 2 == 0)
//         {

//             v.push_back(1);
//         }
//         else
//         {
//             v.push_back(0);
//         }

//         n /= k;
//     }
//     cout << v.size() << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int cnt =0;
    while (n > 0)
    {
        n /= k;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}