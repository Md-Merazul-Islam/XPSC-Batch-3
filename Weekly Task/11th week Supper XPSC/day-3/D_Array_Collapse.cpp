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
#define N 500010
#define P 998244353
int n, a[N], stk[N], top;
ll f[N], g[N], h[N];

void once()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    g[0] = h[0] = 1;
    top = 0;

    for (int i = 1; i <= n; i++)
    {
        while (top && a[stk[top]] > a[i])
            top--;

        int p = stk[top];
        f[i] = p ? (f[p] + g[p]) % P : 0;
        g[i] = (h[i - 1] + (p ? P - h[p - 1] : 0) + f[p]) % P;
        h[i] = (h[i - 1] + g[i]) % P;
        stk[++top] = i;
    }

    cout << (f[n] + g[n]) % P << "\n";
}

int main()
{
    int T;
    cin >> T;

    while (T--)
        once();

    return 0;
}
