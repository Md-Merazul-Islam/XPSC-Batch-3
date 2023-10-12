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
        string name = "Timur";
        sort(s.begin(), s.end());
        sort(name.begin(), name.end());
        bool falg = true;
        if (s.size() != name.size())
        {
            cout << "NO" << endl;
          
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != name[i])
                {
                    falg = false;
                }
            }

            if (falg)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}