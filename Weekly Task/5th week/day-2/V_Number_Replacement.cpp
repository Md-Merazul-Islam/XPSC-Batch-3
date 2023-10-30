/***************************************
**************بسم الله الرحمن الرحيم*************
****************************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    cin >> s;
    bool flag = true;
    map<int, char> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(a[i]) != mp.end() && mp[a[i]] != s[i])
        {
            flag = false;
            break;
        }

        mp[a[i]] = s[i];
    }
    cout << (flag ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}