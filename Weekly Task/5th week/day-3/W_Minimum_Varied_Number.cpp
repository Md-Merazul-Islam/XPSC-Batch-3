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
        vector<int> digit;
        int mask = 0;
        for (int i = 9; i >= 1; i--)
        {
            int bit = 1 << i;
            if ((mask & bit) == 0)
            {
                if (n - i >= 0)
                {
                    digit.push_back(i);
                    n -= i;
                    mask |= bit;
                }
            }
        }
        for (int i = digit.size() - 1; i >= 0; i--)
        {
            cout << digit[i];
        }
        cout << endl;
    }
    return 0;
}