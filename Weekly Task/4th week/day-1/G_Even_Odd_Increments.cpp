
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);

    ll sumod = 0, sumev = 0;
    int o = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            o++;
            sumod += a[i];
        }
        else
        {
            e++;
            sumev += a[i];
        }
    }

    while (q--)
    {
        ll ty, x;
        cin >> ty >> x;
        if (ty == 1)
        {
            if (x % 2 == 0)
            {
                sumod += (x * e);
            }
            else
            {
                sumev += (sumod + x * e);
                o += e;
                e = 0;
                sumod = 0;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                sumev += (x * o);
            }
            else
            {
                sumod += (sumev + x * o);
                e += o;
                o = 0;
                sumev = 0;
            }
        }
        cout << sumev + sumod << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
