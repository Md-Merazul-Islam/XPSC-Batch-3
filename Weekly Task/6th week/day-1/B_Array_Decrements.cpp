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

bool check(vector<int> &a, vector<int> &b, int n)
{
    int dif = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            dif = min(dif, a[i] - b[i]);
            // cout << dif << endl;
        }
    }
    if (dif < 0)
        return false;
    if (dif == INT_MAX)
        return true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - b[i] > dif)
            return false;
        if (b[i] != 0 & a[i] - b[i] < dif)
            return false;
    }
    return true;
}

void mdmerazulislam()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << (check(a, b, n) ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}
