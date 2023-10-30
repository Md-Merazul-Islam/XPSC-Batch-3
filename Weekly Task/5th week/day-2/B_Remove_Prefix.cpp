/***************************************
*************بسم الله الرحمن الرحيم************
****************************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int,int>
#define pl pair<ll,ll>
#define f first
#define scd second 
#define pb push_back
using namespace std;


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >=0; i--)
    {
        mp[a[i]]++;
        cnt++;
        if (cnt > mp.size())
        {
            break;
        }
    }
    cout << n - mp.size() << endl;
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