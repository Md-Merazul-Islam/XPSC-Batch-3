// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

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
//     ll n;
//     cin >> n;
//     vector<ll> a(n+1);
//     for (int i = 1; i <=n; i++)
//     {
//         cin >> a[i];
//     }
//     if (n == 1)
//     {
//         cout << a[1] - 1 << nl;
//         return;
//     }
//     vector<ll> ans;
//     ans.pb(1); 
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] != ans[ans.size() - 1])
//         {
//             ans.pb(a[i]);
//         }
//     }
//     ll result = 0;
//     for (int i = 0; i < ans.size() - 1; i++)
//     {
//         if (ans[i] < ans[i + 1])
//         {
//             result += (ans[i + 1] - ans[i]);
//         }
//     }
//     cout << result << nl;
// }

// int main()
// {
//     fast;
//     int t;
//     cin >> t;
//     while (t--)
//         mdmerazulislam();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define For(i, a, b) for(int i = a; i <= b; i++)
#define abr(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;
typedef vector<ll> vec;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vec numbers(n + 4); 

        For(i, 1, n) {
            cin >> numbers[i];
        }

        if (n == 1) {
            cout << numbers[1] - 1 << endl;
            continue;
        }

        vec uniqueNumbers;
        uniqueNumbers.push_back(1); 

        For(i, 1, n) {
            if (numbers[i] != uniqueNumbers[uniqueNumbers.size() - 1]) {
                uniqueNumbers.push_back(numbers[i]);
            }
        }

        ll result = 0;

        abr(i, 0, uniqueNumbers.size() - 1) {
            if (uniqueNumbers[i] < uniqueNumbers[i + 1]) {
                result += (uniqueNumbers[i + 1] - uniqueNumbers[i]);
            }
        }

        cout << result << endl;
    }

    return 0;
}