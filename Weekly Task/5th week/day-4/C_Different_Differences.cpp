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

void solve()
{
    int k, n;
    cin >> k >> n;

    int step = 1;
    int dif = 1;

    for (int j = 1; j <=k; j++)
    {
        cout << step << " ";
        if (n - (step + dif) >= (k - (j + 1)))
        {
            step += dif;
            dif++;
        }
        else
        {
            step++;
        }
    }

    cout << endl;
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