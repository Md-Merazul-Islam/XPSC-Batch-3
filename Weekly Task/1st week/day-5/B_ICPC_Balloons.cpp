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
        int cnt = 0;
        map<char, int> c;

        for (int i = 0; i < n; i++)
        {
            char cur = s[i];

            if (c.find(cur) == c.end())
            {
                cnt += 2;
                c[cur] = 1;
            }
            else
            {
                cnt += 1;
                c[cur] += 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}