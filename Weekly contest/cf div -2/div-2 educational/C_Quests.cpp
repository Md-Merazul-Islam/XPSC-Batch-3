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
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

bool chk(int k, int j)
{
    return k == j;
}

int getans(vi &aa, vi &bb, int n, int k)
{
    int ans = 0, a = 0, b = 0;
    loop(i, 0, n)
    {
        if (chk(k, i))
            break;
        ans += aa[i];
        b = max(bb[i], b);
        int tmp = ans + (k - i - 1) * b;
        a = max(tmp, a);
    }
    return a;
}

void mdmerazulislam()
{
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    loop(i,0,n)cin >> a[i];
    loop(i,0,n)cin >> b[i];
    cout << getans(a, b, n, k) << endl;
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}