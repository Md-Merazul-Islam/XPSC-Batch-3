// #include <bits/stdc++.h>

// using namespace std;
// bool check(string &s, string &s2)
// {
//     int n = s.size(), m = s2.size();
//     for (int i = 0; i <= m - n; i++)
//     {
//         bool flag = true;
//         for (int j = 0; j < n; j++)
//         {
//             if (s[j] != s2[i + j])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag)
//             return true;
//     }
//     return false;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     vector<string> s(t);
//     for (int i = 0; i < t; i++)
//     {
//         cin >> s[i];
//     }
//     vector<string> ans;
//     ans.push_back(s[0]);
//     for (int i = 1; i < t; i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < ans.size(); j++)
//         {
//             if (check(s[i], ans[j]))
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (!flag)
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//         ans.push_back(s[i]);
//     }
//     cout << "YES" << endl;
//     for (string ss : ans)
//     {
//         cout << ss << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const size_t NOT_FOUND = string::npos;
bool cmp(string &a, string &b)
{
    return a.length() < b.length();
}

// bool ck(const string& str1, const string& str2) {
//     return str2.find(str1) == NOT_FOUND_CONSTANT;
// }

int main()
{
    int t;
    cin >> t;
    vector<string> s(t);

    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }

    sort(s.begin(), s.end(), cmp);

    for (int i = 0; i < t - 1; i++)
    {
        if (s[i + 1].find(s[i]) == NOT_FOUND)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    for (const string &ss : s)
    {
        cout << ss << endl;
    }

    return 0;
}
