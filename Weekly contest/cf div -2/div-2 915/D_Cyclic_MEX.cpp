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
#define pb push_back
ll mx(vi arr)
{
    srt(arr);
    ll val = 0;
    for (int num : arr)
        if (num == val)
            val++;
    return val;
}

void mdmerazulislam()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    loop (i,0,n)cin >> a[i];
    ll ans = 0;
    loop(i,0,n)
    {
        vi arr;
        loop(j,i,i+n)
        {
            arr.push_back(a[j % n]);
            b[i] += mx(arr);
        }
        ans = max(ans, b[i]);
    }
    cout << ans << endl;
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