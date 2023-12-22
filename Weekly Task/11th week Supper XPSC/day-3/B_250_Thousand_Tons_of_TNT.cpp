/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

void mdmerazulislam()
{
    int n;
    cin >> n;
    vi a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    if (n == 1)
        cout << ans << "\n";
    else
    {
        vi dvi;
        dvi.push_back(1);
        int j = 2;
        for (; j * j < n; j++)
        {
            if (n % j == 0)
            {
                dvi.push_back(j);
                dvi.push_back(n / j);
            }
        }
        if (j * j == n)
            dvi.push_back(j);

        for (auto d : dvi)
        {
            ll mx = -1, mn = 1e18, k = 0, sum = 0;
            for (int i = 0; i < n; i++)
            {

                sum += a[i];
                k++;

                if (k == d)
                {
                    mx = max(mx, sum);
                    mn = min(mn, sum);
                    k = 0;
                    sum = 0;
                }
            }
            ans = max(ans, mx - mn);
        }
        cout << ans << "\n";
    }
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();
    return 0;
}