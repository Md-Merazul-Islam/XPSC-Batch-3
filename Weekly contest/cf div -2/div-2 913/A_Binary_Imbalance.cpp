

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        int count_zeroes = 0, count_ones = 0;
        bool ok = false;
        string ans = "";
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == '0')
            {
                ok=true;break;
            }

        }
       
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
