
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
        string s[n];
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]]++;
        }

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 0; j < s[i].length(); j++)
            {
                string st1 = s[i].substr(0, j);
                string st2 = s[i].substr(j);
                if (mp.count(st1) && mp.count(st2) && (mp[st1] > 1 || st1 != s[i]))
                {
                    flag = true;
                    break;
                }
            }
            ans += (flag ? "1" : "0");
        }

        cout << ans << endl;
    }
    return 0;
}