
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

bool isPos(vector<pair<int, int>> &seg, int k)
{
    int l = 0, r = 0, n = seg.size();
    for (int i = 0; i < n; i++)
    {
        r = min(r + k, seg[i].second);
        l = max(l - k, seg[i].first);
        if (l > r)
            return false;
    }
    return true;
}
void mdmerazulislam()
{
    int n;
    cin >> n;
    vpi seg(n);
    for (int i = 0; i < n; ++i)
        cin >> seg[i].first >> seg[i].second;

    int l = 0, r = 1e9 + 7;
    ll ans;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (isPos(seg, mid))
        {
            ans = mid;
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    // cout << ans << nl;
    // cout<<r<<endl;
    cout << l << nl;
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

