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
    string s;cin>>s;
    int cnt = 0;
    bool ok= false;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            no;
            ok= true;
            // return;
        }
        if(s[i]=='1'){
            if(ok){
                no;
                // return;
            }else{
                if(cnt==n-1){
                    yes;
                }else{
                    cout<<"IDK"<<nl;cnt++;
                }
            }
        }
        // if(i==n-1)
        // {
        //     if(s[i]=='1')yes;
        //     else no;
        // }
        // else if(s[i]=='0')no;
        // else if(s[i]=='1')cout<<"IDK"<<nl;
    }
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