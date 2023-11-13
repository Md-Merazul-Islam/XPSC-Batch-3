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
#define in insert
#define vi vector <int>
#define vpi vector<pair<int,int>>
#define mp map<int,int>
#define st set <int>
#define fori for(int i=0;i<n;i++)
#define srt v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define nl "\n"
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{
    int n;cin>>n;
    vector<int>om(n),ad(n);
    for(int i=0; i<n; i++)cin>>om[i];
    for(int i=0; i<n; i++)cin>>ad[i];

    int o=0,a=0;
    int mx_o=0,mx_a=0;
    for (int i=0; i<n; i++)
    {
        if(om[i]>0)
        {
            o++;
            mx_o= max(mx_o,o);
        }
        else o=0;

        if (ad[i]>0)
        {
            a++;
            mx_a = max(mx_a,a);
        }
        else a=0;

    }

    if(mx_a > mx_o)
    {
        cout<<"Addy\n";
    }
    else if (mx_a<mx_o)
    {
        cout<<"Om\n";
    }
    else{
        cout<<"Draw\n";
    }

}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}