/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

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

void mdmerazulislam()
{
    int n;
    cin >> n;
    int a[8000+4];
    vector<int>v(8000+2,0);
    loop(i, 0, n)
    {
        cin >> a[i];
    }
    int ans = 0;
   
    for (int i = 0; i < n; i++)
    {
        int sum = a[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += a[j];
            if (sum > n)
            {
               break;
            }
            v[sum]=1;
        }
    }
    for(int i=0; i<n; i++){
        if(v[a[i]])ans++;
    }
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
