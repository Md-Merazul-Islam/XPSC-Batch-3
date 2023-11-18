/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    ll a, b;
    cin >> a >> b;
    ll gcd = __gcd(a,b);
    bool flag = true;
    while(b>1)
    {
        if(gcd==1)
        {
            flag= false;
            break;
        }
        b/=gcd;
        gcd = __gcd(a,b);
    }
    if(flag)yes;
    else no;

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