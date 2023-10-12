#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t, k;
    cin >> t >> k;
    ll cnt = 0;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % k == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}