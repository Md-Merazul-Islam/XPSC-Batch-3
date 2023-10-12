#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x, y;
    cin >> x >> y;
    ll mx = 1;
    for (ll i = x; i < y; i *= 2)
    {
        ll cur = i;
        ll len = 1;
        while (cur * 2 <= y)
        {
            cur *= 2;
            len++;
        }
        mx = max(len, mx);
    }
    cout << mx << endl;
    return 0;
}


// --------------------------------


#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    long long mx = 1;
    long long cnt = 1;
    while (x * 2 <= y)
    {
        x *= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}