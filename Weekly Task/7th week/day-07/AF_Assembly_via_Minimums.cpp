/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    ll a, b, c, n, m, k = -1, x, res = 0;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    int itr = -1;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if (mp[arr[i]] == 2)
        {
            cnt++;
            itr = arr[i];
        }
    }
    if (cnt < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<ll> res(n);
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] >= 2)
                res[i] = 2 + (itr == arr[i]);
            else
                res[i] = 1 + (itr == arr[i]);
            mp[arr[i]]--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
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