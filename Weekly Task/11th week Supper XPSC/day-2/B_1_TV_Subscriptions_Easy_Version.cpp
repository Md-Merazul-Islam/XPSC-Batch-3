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
    int n, k, d;
    cin >> n >> k >> d;

    vi v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    for (int i = 0; i < d; i++)
    {
        mp[v[i]]++;
    }
    int i = 0;
    int j = d;
    int ans = mp.size();
    while (i < n and j < n)
    {

        mp[v[i]]--;
        if (mp[v[i]] == 0)
        {
            mp.erase(v[i]);
        }
        mp[v[j]]++;
        ans = min(ans, (int)mp.size());
        i++;
        j++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}
