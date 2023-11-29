#include <bits/stdc++.h>
#define ll long long
using namespace std;

// void mdmerazulislam()
// {
//     int c, f;
//     cin >> c >> f;
//     ll ans1 = 0, ans2 = 0;
//     ll ori_c = c, ori_f = f;
//     ll x = ori_c;
//     ll y = ori_f;

//     while (c % f != 0)
//     {
//         ans1++;
//         c++;
//         f--;
//     }
//     while (x % y != 0)
//     {
//         ans2++;
//         x--;
//         y++;
//     }
//     if (f == 0)
//         cout << ans1 << endl;

//     else
//     {
//         ll answer = min(ans1, ans2);
//         cout << answer << endl;
//     }
// }

void mdmerazulislam()
{
    int c, f;
    cin >> c >> f;
    ll ans1 = 0, ans2 = 0;
    ll ori_c = c, ori_f = f;

    while (c % f != 0)
    {
        ans1++;
        c++;
        f--;
    }
     c = ori_c;
    f = ori_f;
    while (c % f != 0)
    {
        ans2++;
        c--;
        f++;
    }
    if (c == 0)
        cout << ans1 << endl;
    else{ll rsl = min(ans1, ans2);
    cout << rsl << endl;}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}
