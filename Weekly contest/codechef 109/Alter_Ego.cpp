// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void mdmerazulislam()
// {
//     int n;
//     cin >> n;
//     vector<int> e, o, ans, v;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x % 2 != 0)
//         {
//             o.push_back(x);
//             cnt++;
//         }
//         else
//         {
//             e.push_back(x);
//         }
//     }
//     if (cnt % 2 != 0)
//     {
//         cout << "-1\n";
//         return;
//     }
//     sort(e.rbegin(), e.rend());
//     sort(o.rbegin(), o.rend());

//     int tmp = e.size();
//     if (tmp > n - tmp)
//     {
//         for (int i = 0; i < n - tmp; i++)
//         {
//             v.push_back(o[i]);
//             v.push_back(e[i]);
//         }
//         for (int i = n - tmp; i < 2 * tmp - n; i++)
//         {
//             v.push_back(e[i]);
//         }
//     }
//     else
//     {
//         for (int i = 0; i < tmp; i++)
//         {
//             v.push_back(o[i]);
//             v.push_back(e[i]);
//         }
//         for (int i = tmp; i < n - tmp; i++)
//         {
//             v.push_back(o[i]);
//         }
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         int k = (v[i] + v[i + n / 2]) / 2;
//         ans.push_back(k);
//         k = abs(v[i] - v[i + n / 2]) / 2;
//         ans.push_back(k);
//     }
//     // sort(ans.rbegin(), ans.rend());
//     for (int i = 0; i < n; i += 2)
//     {
//         cout << ans[i] << " ";
//     }
//     for (int i = n - 1; i >= 1; i -= 2)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         mdmerazulislam();
//     }

//     return 0;
// }


// // #include <bits/stdc++.h>
// // #include <cmath>
// // using namespace std;

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<int> eve;
// //         vector<int> odd;
// //         vector<int> ans;
// //         vector<int> v;
// //         int a = 0;
// //         for (int i = 0; i < n; i++)
// //         {
// //             int x;
// //             cin >> x;
// //             if (x % 2 != 0)
// //             {
// //                 odd.push_back(x);
// //                 a++;
// //             }
// //             else
// //             {
// //                 eve.push_back(x);
// //             }
// //         }
// //         if (a % 2 != 0)
// //         {
// //             cout << -1 << endl;
// //             continue;
// //         }
// //         sort(eve.begin(), eve.end(), greater<int>());
// //         sort(odd.begin(), odd.end(), greater<int>());
// //         int m = eve.size();
// //         if (m > n - m)
// //         {
// //             for (int i = 0; i < n - m; i++)
// //             {
// //                 v.push_back(odd[i]);
// //                 v.push_back(eve[i]);
// //             }
// //             for (int i = n - m; i < m; i++)
// //             {
// //                 v.push_back(eve[i]);
// //             }
// //         }
// //         else
// //         {
// //             for (int i = 0; i < m; i++)
// //             {
// //                 v.push_back(odd[i]);
// //                 v.push_back(eve[i]);
// //             }
// //             for (int i = m; i < n - m; i++)
// //             {
// //                 v.push_back(odd[i]);
// //             }
// //         }

// //         for (int i = 0; i < n / 2; i++)
// //         {
// //             int x = (v[i] + v[i + n / 2]) / 2;
// //             ans.push_back(x);
// //             x = abs((v[i] - v[i + n / 2]) / 2);
// //             ans.push_back(x);
// //         }

// //         // Rearrange the output array
// //         for (int i = 0; i < n; i += 2)
// //         {
// //             cout << ans[i] << " ";
// //         }
// //         for (int i = n - 1; i >= 1; i -= 2)
// //         {
// //             cout << ans[i] << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define vli vector<ll>

using namespace std;

void solve() {
    ll n;
    cin >> n;
    vli nums(n);

    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<ll> evens, odds;
    vector<ll> result(n, -1);

    for (auto num : nums) {
        if (num % 2 != 0) {
            odd++;
            odds.push_back(num);
        } else {
            even++;
            evens.push_back(num);
        }
    }

    if (even % 2 != 0 || odd % 2 != 0) {
        cout << "-1";
    } else {
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());
        vector<int> oddCount(odd), evenCount(even);

        int k = 0;
        for (auto z : odds) {
            oddCount[k] = z;
            k += 2;
            if (k >= odd)
                k = 1;
        }

        k = 0;
        for (auto z : evens) {
            evenCount[k] = z;
            k += 2;
            if (k >= even)
                k = 1;
        }

        int itr = 0;
        for (int z = 0; z < odd; z += 2) {
            result[itr] = (oddCount[z] + oddCount[z + 1]) / 2;
            result[itr + (n / 2)] = abs(oddCount[z] - oddCount[z + 1]) / 2;
            itr++;
        }

        for (int z = 0; z < even; z += 2) {
            result[itr] = (evenCount[z] + evenCount[z + 1]) / 2;
            result[itr + (n / 2)] = abs(evenCount[z] - evenCount[z + 1]) / 2;
            itr++;
        }

        for (auto h : result) {
            cout << h << " ";
        }
    }
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        solve(); 
        cout << endl; 
    }

    return 0;
}