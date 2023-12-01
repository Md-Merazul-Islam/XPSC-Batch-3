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
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

bool isOk(int uniqueElements, int k, vector<int> &v)
{
    return (uniqueElements > 1 && k == 1 && !is_sorted(v.begin(), v.end()));
}

void mdmerazulislam()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    loop(i,0,n)
    {
        cin >> a[i];
    }

    vector<int> dop = a;
    sort(dop.begin(), dop.end());
    set<int> s(a.begin(), a.end());

    if (isOk(s.size(), k, a))
    {
        no;
    }
    else
    {
        yes;
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

