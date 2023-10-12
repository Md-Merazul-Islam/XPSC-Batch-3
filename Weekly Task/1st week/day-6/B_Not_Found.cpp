#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<bool> v(26, false);

    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            v[c - 'a'] = true;
        }
    }
    char miss = 'a';
    while (miss <= 'z' && v[miss - 'a'])
    {
        miss++;
    }
    if (miss <= 'z')
    {
        cout << miss;
    }
    else
    {
        cout << "None" << endl;
    }

    return 0;
}