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
        // sort(s.begin(), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string chk = "yes";
        // sort(chk.begin(), chk.end());
        bool flag = true;

        // cout << s << " " << chk << endl;

        if (s != chk)
        {
            flag = false;
       
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}