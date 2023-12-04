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

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    int answer = -1;
    if (k == 0 || (k <= n && s[k - 1] != s[k]))
    {
        answer = s[k - 1] +1;
    }

    cout << answer << endl;

    return 0;
}