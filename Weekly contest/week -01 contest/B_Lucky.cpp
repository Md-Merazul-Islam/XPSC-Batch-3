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

        if (s.size() != 6)
        {
            cout << "NO" << endl;
        }
        int fast = 0;
        for (int i = 0; i < 3; i++)
        {
            fast += s[i];
        }
        int snd = 0;
        for (int i = 3; i < 6; i++)
        {
            snd += s[i];
        }
        if (fast == snd)
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