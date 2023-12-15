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

    int n, m, d;
    cin >> n >> m >> d;
    priority_queue<int> Q;
    long long s = 0, t = 0;
    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;
        if (a <= 0)
            continue;
        s = max(s, (t += a) - static_cast<long long>(d) * i);
        Q.push(-a);
        if (Q.size() >= m)
        {
            t += Q.top();
            Q.pop();
        }
    }

    cout << s << '\n';
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