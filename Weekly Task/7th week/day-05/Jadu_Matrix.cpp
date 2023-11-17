// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define pq priority_queue
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define in insert
// #define vpi vector<pair<int, int>>
// #define fori for (int i = 0; i < n; i++)
// #define srt v.begin(), v.end()
// #define all(v) v.begin(), v.end()
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

// void mdmerazulislam()
// {
// }

// int main()
// {
//     fast;

//     int n, m;
//     cin >> n >> m;
//     int a[n + 1][m + 1];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; i < m; i++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     bool flag = true;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; i < m; i++)
//         {
//             if ((a[i][j] != 1) || (i == j || i + j == n - 1))
//             {
//                 flag = false;
//                 break;
//             }
//             else if (a[i][j] != 0 || (i != j && i + j != n - 1))
//             {
//                 flag = flag;
//                 break;
//             }
//         }
//     }

//     cout << (flag ? "YES" : "NO") << endl;

//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
            // if (matrix[i][j] < 0 || matrix[i][j] > 100) {
            //     printf("NO\n");
            //     return 0;
            // }
        }
    }

    if (N != M || N < 1 || N > 100 || M < 1 || M > 100)
    {
        printf("NO\n");
        return 0;
    }
    
    bool flag = true;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((i != j && i + j != N - 1) && matrix[i][j] != 0)
            {
                flag = 0;
                break;
            }
            if ((i == j || i + j == N - 1) && matrix[i][j] != 1)
            {
                flag = 0;
                break;
            }
        }
        if (!flag)
        {
            break;
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
