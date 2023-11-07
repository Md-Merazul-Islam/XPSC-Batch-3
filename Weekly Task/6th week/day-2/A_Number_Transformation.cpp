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

void mdmerazulislam()
{
    int x, y;
    cin >> x >> y;
    int a, b;
    if (y%x!=0)
    {
        a = 0, b = 0;
    }
    else if (x == y)
    {
        a = 1, b = 1;
    }
    else
    {
        a = 1, b = y / x;
    }
    cout << a << " " << b << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}