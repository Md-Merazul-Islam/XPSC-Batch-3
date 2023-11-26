/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<int,int>>
#define fori(i, a, b) for(int i = (a); i < (b); ++i)
#define srt v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define nl "\n"
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{
    int n; cin>>n;
    vi a(n+1);
    fori(i,1,n+1){
        cin>>a[i];
    }
    bool ok = false;
    fori(i,1,n+1)
    {
        bool tmp = false;
        for(int j=2; j<=i+1; j++)
        {
            if(a[i]%j!=0){
                tmp =true;break;
            }
        }
        if(!tmp){
            ok=true;break;
        }
    }
    cout<<(ok?"NO":"YES")<<endl;
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