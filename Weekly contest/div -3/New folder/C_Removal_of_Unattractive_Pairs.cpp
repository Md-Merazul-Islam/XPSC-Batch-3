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

const int N = 26;
void mdmerazulislam()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> frq(N, 0);
    for (char ch : s)
    {
        frq[ch - 'a']++;
    }
    int mx = *max_element(frq.begin(), frq.end());
    int mn = 0;
    int result;
    if (n % 2 == 0)
        result = max(mn, mx - (n - mx));
    else
        result = max(1, mx - (n - mx));
    cout << result << nl;
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