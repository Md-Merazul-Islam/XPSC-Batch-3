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

void mdmerazulislam()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ommmm = 0, adddd = 0;
    int om = 0, ad = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            ommmm++;
        }
        else
        {
            ommmm = 0;
        }
        if (b[i] > 0)
        {
            adddd++;
        }
        else
        {
            adddd = 0;
        }
        om = max(om, ommmm);
        ad = max(ad, adddd);
    }

    if (om == ad)
    {
        cout << "Draw" << endl;
    }
    else if (om > ad)
    {
        cout << "Om" << endl;
    }
    else
    {
        cout << "Addy" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}