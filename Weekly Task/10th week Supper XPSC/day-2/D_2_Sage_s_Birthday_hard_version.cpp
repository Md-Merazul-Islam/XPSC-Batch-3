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
#define loop(i,  b) for (int i = 0; i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

void mdmerazulislam()
{
}

int main()
{
    fast;

    ll n;
    cin >> n;
    vi a(n);
    loop(i, n) cin >> a[i];
    srt(a);
    ll j = 0;
    ll ans[n];
    for (int i = 1; i < n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }
    for (int i = 0; i < n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
            cnt++;
    }
    cout << cnt << endl;
    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}