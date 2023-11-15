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

void mdmerazulislam()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            cnt++;
        else
            x = x + (s[i] - '0');
    }
    if (s[0] == '?')
    {
        cout << 1;
        cnt--;
        while (cnt--)
        {
            cout << 0;
        }
        cout << nl;
    }
    else {
        if(cnt>0)
        {
            x=x%9;
            if(x==0)
            {
                cnt--;
                while(cnt--)cout<<1;
                    cout<<2<<endl;
            }
            else{
                while(cnt--)cout<<1;
                cout<<nl;
            }
        }
        else{
            if(x%9)cout<<0<<endl;
            else cout<<1<<endl;
        }
    }
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}


