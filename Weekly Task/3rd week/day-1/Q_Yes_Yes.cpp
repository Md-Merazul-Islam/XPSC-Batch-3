#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        string mn = "";

        for (int i = 1; i <=100; i++)
        {
            mn += "Yes";
        }

        bool flag = false;
        for (int i = 0; i < mn.size(); i++)
        {
            string tmp = mn.substr(i, n);
            if (i+n-1 < mn.size() && tmp == s)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}