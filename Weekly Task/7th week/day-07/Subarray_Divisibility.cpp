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
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> map;
    ll cnt = 0, psum = 0;
    map[0]=01;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        psum = (psum + a[i]) % n;
        if (psum < 0)
            psum += n;
        cnt += map[psum];
        map[psum]++;
    }
    cout << cnt << endl;
}

int main()
{
    fast;

    mdmerazulislam();

    return 0;
}