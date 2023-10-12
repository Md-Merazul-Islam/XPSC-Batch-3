#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string sub = s.substr(i, 2);
        if (mp.find(sub) != mp.end())
        {
            mp[sub]++;
        }
        else
        {
            mp[sub] = 1;
        }
    }
    string x;
    int mx = 0;

    for (auto p : mp)
    {
        if (p.second > mx)
        {
            mx = p.second;
            x = p.first;
        }
    }
    cout << x << endl;
    return 0;
}