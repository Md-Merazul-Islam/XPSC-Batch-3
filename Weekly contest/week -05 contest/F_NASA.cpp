/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

bool ispalidrom(int n)
{
    string s="";
    while(n>0)
    {
        int x = n%10;
        char y = '0'+x;
        s+=(char) x;
        n/=10;
    }
    string x = s;
    reverse(s.begin(),s.end());
    return x == s;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
   int e = (1 << 15) - 1;
    map<int,int>pali;
    map<int,int>mp;

    for (int i = 0; i < e; i++)
    {
        if(ispalidrom(i))pali[i]++;
    }
    for(int i=0; i<n;i++)
    {
        e= a[i];
        mp[e]++;
        for(auto m : pali)
        {
            int tmp = m.first;
            int  tmp2 = tmp^e;
            ans += mp[tmp2];
        }

    }
    cout << ans << endl;
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