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

void mdmerazulislam()
{
    int n;
    cin >> n;
    vector<bool> visited(n+1, false);
    vi ans;
    for (int i = n; i >= 1; i--)
    {
        if (!visited[i])
        {
            int tmp = i;
            ans.push_back(i);
            visited[i] = true;
            while (tmp % 2 == 0)
            {
                visited[tmp / 2] = true;
                ans.push_back(tmp / 2);
                tmp /= 2;
            }
        }
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << nl;
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

// a1,a2,a3,a4.....
// di= gcd(ai, a(i%n)+1)
// d1,d2,d3........
