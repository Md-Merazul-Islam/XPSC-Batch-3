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
#define nl endl
using namespace std;

void solve()
{
    int l, r, x;
    cin >> l >> r >> x;
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0<< nl;
        return ;
    }
    if (abs(a-b) >= x)
    {
        cout<<1<<nl;return;
    }
    if((a-x<l && a+x>r )|| (b-x<l && b+x>r))
    {
        cout<<-1<<nl;return;
    }
    if((a-l >=x && b-l >=x)|| (r-a>=x && r-b>=x))
    {
        cout<<2<<nl;
    }
    else{
        cout<<3<<nl;
    }

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