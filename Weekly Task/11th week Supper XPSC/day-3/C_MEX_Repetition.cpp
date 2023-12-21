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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i]; 
    }
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        v[i] = a[i];
    }
    sort(v.begin(), v.end());
    int cnt = n;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != i)
        {
            cnt = i;
            break;
        }
    }
    a.push_back(cnt);
    int x = n + 1;
    int y = k % x;
    for (int i = 0; i < n; ++i)
    {
        cout << a[(i + x - y) % x] << " ";
    }
    cout << endl;
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