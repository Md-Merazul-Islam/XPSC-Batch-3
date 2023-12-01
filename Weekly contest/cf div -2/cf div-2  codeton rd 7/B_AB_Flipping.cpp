// // /**************بسم الله الرحمن الرحيم*************
// // ***********************❀‿❀************************/

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define PI 3.14159265359
// // #define dmin 1e-9
// // #define dd double
// // #define ll long long
// // #define pq priority_queue
// // #define yes cout << "YES\n"
// // #define no cout << "NO\n"
// // #define pb push_back
// // #define in insert
// // #define vpi vector<pair<int, int>>
// // #define fori for (int i = 0; i < n; i++)
// // #define srt v.begin(), v.end()
// // #define all(v) v.begin(), v.end()
// // #define nl "\n"
// // #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// // void mdmerazulislam()
// // {
// //     int n;
// //     cin >> n;
// //     string s;
// //     cin >> s;
// //     int cnt = 0, ans = 0;

// //     for (int i = n - 1; i >= 0; i--)
// //     {
// //         if (s[i] == 'B')
// //         {
// //             cnt++;
// //         }
// //         else
// //         {
// //             ans += cnt;
// //             if (cnt > 0)
// //             {
// //                 s[i] = 'B';
// //                 cnt = 0;
// //                 i++;
// //             }
// //         }
// //     }
// //     cout << ans << endl;
// // }
// // int main()
// // {
// //     fast;

// //     int t;
// //     cin >> t;
// //     while (t--)
// //         mdmerazulislam();

// //     return 0;
// // }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        string st;
        cin >> st;

        int b = 0, rst = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (st[i] == 'B') {
                b++;
            } else {
                rst += b;
                if (b) {
                    st[i] = 'B',b=0;
                    i++;
                }
            }
        }
        cout << rst << endl;
    }

    return 0;
}

