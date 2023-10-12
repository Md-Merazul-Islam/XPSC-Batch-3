#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string x = "abc";
        int cnt = 0;
        if (s == x)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != x[i])
                {
                    cnt++;
                }
            }
            if (cnt == 2)
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
