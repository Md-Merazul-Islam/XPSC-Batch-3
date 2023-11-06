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
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
       
    }

    int head =0;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=head)
        {
            v.pb(abs(a[i]-b[i]));
        }else{
            v.pb(abs(b[i]-head));
        }
        head=b[i];
    }

    for (int val : v)
    {
        cout << val << " ";
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
        mdmerazulislam();

    return 0;
}