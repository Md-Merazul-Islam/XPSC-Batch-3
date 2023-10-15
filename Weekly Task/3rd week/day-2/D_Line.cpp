
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
        string s;
        cin >> s;
        vector<int> d(n, 0);
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            ll cur = (s[i] == 'L') ? i : n - i - 1;
            ll mx = (i > (n - i - 1)) ? i : n - i - 1;
            sum += cur;
            ll difernt = mx - cur;
            d[i] = difernt;
        }
        sort(d.rbegin(), d.rend());
        for (ll i = 0; i < n; i++)
        {
            sum += d[i];
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}