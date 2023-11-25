/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    int ar[12] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
    ll n;
    cin >> n;
    if (n & 1)
    {
        n--;
        int a, b, c;
        c = 1;
        int x, y;
        for (int i = 0; i < 12; i++)
        {
            x = ar[i];
            y = n - x;
            if (__gcd(x, y) == c)
            {
                a = x;
                b = y;
                break;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        cout << 2 << " " << n - 3 << " " << 1 << endl;
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