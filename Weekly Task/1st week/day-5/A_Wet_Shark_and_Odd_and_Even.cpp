#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    ll a[n];
    ll sum = 0;
    ll min_odd = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 2 == 1)
        {
            min_odd = min(min_odd, a[i]);
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - min_odd << endl;
    }

    return 0;
}