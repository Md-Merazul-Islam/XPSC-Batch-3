#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = 1; i <= s.size(); i++)
    {
        if (i % 2 == 1)
        {
            ans += s[i-1];
        }
    }
    cout << ans << endl;
    return 0;
}