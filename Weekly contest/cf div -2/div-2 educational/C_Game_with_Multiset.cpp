


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

vi frq(32, 0);

void mdmerazulislam()
{
    int k;
    cin >> k;
    while (k--)
    {
        int t, v;
        cin >> t >> v;
        if (t == 1)
        {
            frq[v]++;
        }
        else
        {
            vi a = frq;
            bool ok = true;
            int i = 0;
            while (i < 30)
            {
                if ((v >> i) & 1)
                {
                    if (a[i] > 0)
                        a[i]--;
                    else
                    {
                        ok = false;break;
                        
                    }
                }
                a[i + 1] += a[i] / 2;
                i++;
            }
            if (ok)
                yes;
            else
                no;
        }
    }
}

int main()
{
    fast;
    mdmerazulislam();

    return 0;
}