#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
    

        int tm = a[0];
        int cnt = 0;
        for (int i = 1; i < 4 ; i++)
        {
            if (tm < a[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}