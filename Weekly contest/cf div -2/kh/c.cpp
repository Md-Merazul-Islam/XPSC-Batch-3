// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<int, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

// void mdmerazulislam()
// {
// }

// int main()
// {
//     fast;

//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     loop(i, 0, n) cin >> a[i];
//     int i = 0, j = 0, s = 0, mx = INT_MIN;
//     while (j < n)
//     {
//         s += a[j];
//         if (j >= k - 1)
//         {
//             mx = max(mx, s);
//             s -= a[i];
//             i++;
//         }
//         j++;
//     }
//     cout << mx << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0, j = 0, s = 0;
    queue<int> q;
    while (j < n)
    {
        if (a[j] < 0)
            q.push(a[j]);
        if (j >= k - 1)
        {
            if (q.size())
                cout << q.front() << " ";
            else
                cout << 0 << endl;
            if (a[i] < 0)
            {
                q.pop();
            }
            i++;
        }
        j++;
    }

    return 0;
}