/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> om(n);
    vector<int> addy(n);
    for (int i = 0; i < n; i++)
        cin >> om[i];
    for (int i = 0; i < n; i++)
        cin >> addy[i];

    int om_s = 0, ad_s = 0;
    int mx_o = 0, mx_a = 0;

    for (int i = 0; i < n; i++)
    {

        if (om[i] > 0)
        {
            om_s++;
            mx_o = max(mx_o, om_s);
        }
        else
        {
            om_s = 0;
        }

        if (addy[i] > 0)
        {
            ad_s++;
            mx_a = max(mx_a, ad_s);
        }
        else
        {
            ad_s = 0;
        }
    }

    if (mx_o > mx_a)
    {
        cout << "Om" << endl;
    }
    else if (mx_a > mx_o)
    {
        cout << "Addy" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}