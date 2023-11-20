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

// int countDigits(int x) {
//     int count = 0;
//     while (x != 0) {
//         x /= 10;
//         ++count;
//     }
//     return count;
// }

void mdmerazulislam()
{
    int x;
    cin >> x;
    int z = x % 10;
    int s = log10(x) + 1;
    int ans= (z - 1) * 10 + (s * (s + 1)) / 2 ;
    cout<<ans<<endl;
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
