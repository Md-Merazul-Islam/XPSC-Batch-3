/***************************************
 *       بسم الله الرحمن الرحيم        *
 ****************************************/

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
    // cout<<n/2<<endl;
    if (n == 5)
    {
        cout << "5 4 1 2 3";
    }
    else if (n == 3)
    {
        cout << "-1";
    }
    else if (n % 2 == 1)
    {
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        if (n >=2)
        {
            swap(a[(n / 2)], a[(n / 2)+1]);
            reverse(a.begin(),a.end());
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            cout << i << " ";
        }
    }
    cout << endl;
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