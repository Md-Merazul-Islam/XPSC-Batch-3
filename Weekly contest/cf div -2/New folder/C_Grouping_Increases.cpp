

/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
**************************************************************/
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }

// void sw(ll &a, ll &b)
// {
//     if (a > b)
//         swap(a, b);
// }
// void updateAns2(ll &ans2, int value)
// {
//     if (value <= ans2)
//         ans2 = value;
// }
// void updateAns1(ll &ans1, int value, ll ans2)
// {
//     if (value <= ans1 && value > ans2)
//     {
//         ans1 = value;
//     }
// }
void mdmerazulislam()
{
    ll ans1 = 1e9, ans2 = 1e9;
    int n;
    cin >> n;
    vi a(n);
    ll cnt = 0;
    loop(i, 0, n)
    {
        cin >> a[i];
        if (ans1 > ans2)
            swap(ans1, ans2);
        if (a[i] <= ans1)
            ans1 = a[i];
        else if (a[i] <= ans2)
            ans2 = a[i];
        else
        {
            ans1 = a[i];
            cnt++;
        }
    }
    cout << cnt << endl;
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
