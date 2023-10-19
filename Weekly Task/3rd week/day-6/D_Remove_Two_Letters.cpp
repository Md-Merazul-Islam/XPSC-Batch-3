// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         vector<string> ans;

//         for (int i = 0; i < n - 1; i++) {
//             string cur = s.substr(i, 2);
//             string rev_cur = cur;
//             reverse(rev_cur.begin(), rev_cur.end());

//             bool found = false;

//             for (char c : s) {
//                 if (s.find(cur) != string::npos || s.find(rev_cur) != string::npos) {
//                     found = true;
//                     break;
//                 }
//             }

//             if (!found) {
//                 ans.push_back(cur);
//             }
//         }

//         cout << ans.size() << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
       int tmp = n-1;
       int ans =0;
        for (int i = 0; i < n - 2; i++)
        {
            if(s[i]== s[i+2])
            {
                ans++;
            }
        }
        cout << tmp-ans << endl;
    }
    return 0;
}