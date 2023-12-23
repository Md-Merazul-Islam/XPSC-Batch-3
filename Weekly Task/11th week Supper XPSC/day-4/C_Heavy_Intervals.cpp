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
    vi left(n), right(n), cost(n), sg, cur;
    vpi vec;
    loop(i, 0, n)
    {
        cin >> left[i];
        vec.push_back({left[i], 0});
    }
    loop(i, 0, n)
    {
        cin >> right[i];
        vec.push_back({right[i], 1});
    }
    loop(i, 0, n)
            cin >>
        cost[i];
    srt(vec);
    for (auto event : vec)
    {
        if (event.second != 0)
        {
            sg.push_back((event.first - cur.back()));
            cur.pop_back();
        }
        else
            cur.push_back(event.first);
    }
    srt(sg);
    rsrt(cost);
    ll ans = 0;
    loop(i, 0, n)
        ans += (sg[i] * cost[i]);
    cout << ans << endl;
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
