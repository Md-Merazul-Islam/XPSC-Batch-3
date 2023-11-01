/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;
bool isPossible(int n, int b, vector<int> &a)
{
    for (int mask = 0; mask < (1 << 9); mask++)
    {
        int result = a[0];
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                result &= a[i];
            }
        }
        if (result == b)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    int n, b;
    cin >> n >> b;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (isPossible(n, b, a))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}