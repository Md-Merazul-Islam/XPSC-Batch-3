// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int prime[n + 1] = {0};
//     for (int i = 2; i <=n; i++)
//     {
//         if (prime[i]==0)
//         {
//             for (int j = i; j <= n; j += i)
//             {
//                 prime[j]++;
//             }
//         }
//     }

//     int cnt = 0;
//     for (int i = 2; i <=n; i++)
//     {
//         if (prime[i] == 2)
//         {
//             cnt++;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int slove(int n)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n = n / i;
            }
            cnt++;
        }
    }
    if (n > 1)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (slove(i) == 2)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}