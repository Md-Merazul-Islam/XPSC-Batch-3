
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        vector<ll> v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            while (x % 2 == 0)
            {
                cnt++;
                x /= 2;
            }
            int tmp = 0;
            int cur = i;
            while (cur % 2 == 0)
            {
                tmp++;
                cur /= 2;
            }
            v.push_back(tmp);
        }
        sort(v.rbegin(), v.rend());
        if (cnt >= n)
        {
            cout << "0" << endl;
        }
        else
        {
            int opareation = 0;
            for (int i = 0; i < v.size(); i++)
            {
                cnt += v[i];
                opareation++;
                if (cnt >= n)
                {
                    cout << opareation << endl;
                    break;
                }
            }
            if (cnt < n)
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}