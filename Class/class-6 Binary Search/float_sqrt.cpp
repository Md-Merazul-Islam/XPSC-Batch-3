/***************************************
 *       بسم الله الرحمن الرحيم        *
 ****************************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pi pair<ll, ll>
#define f first
#define scd second
#define pb push_back

using namespace std;

bool AreSame(dd a, dd b)
{
    return fabs(a - b) < 1e-15;
}

void solve()
{
    dd n;
    cin >> n;
    dd l = 0.0;
    dd r = n;
    while ((r - l) >= 1e-15) // qsn e joto deya thakbe sehi onujayi
    {
        dd mid = l + (r - l) / 2;
        dd val = mid * mid;
        if (AreSame(val, n))
        {
            cout << mid << endl;
            break;
        }
        else if (val > n)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}