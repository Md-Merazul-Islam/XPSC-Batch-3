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

tuple<int, int, int> readInput()
{
    int n, a, b;
    cin >> n >> a >> b;
    return make_tuple(n, a, b);
}

void solve(int n, int a, int b)
{
    if (a + b < n - 1 || (a == b && b == n))
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    fast;

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n, a, b;
        tie(n, a, b) = readInput();
        solve(n, a, b);
    }

    return 0;
}
