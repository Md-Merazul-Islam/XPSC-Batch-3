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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        multiset<ll> s;
        for (int i = 0; i < n; i++)
        {
            if (!s.size())
            {
                s.insert(a[i]);
            }
            else
            {
                ll x = *(--s.end());
                if (x >= a[i])
                {
                    s.erase(--s.end());
                    s.insert(x ^ a[i]);
                }
                else
                {
                    s.insert(a[i]);
                }
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}