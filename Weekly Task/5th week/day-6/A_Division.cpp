/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/


#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int,int>
#define pl pair<ll,ll>
#define f first
#define scd second 
#define pb push_back
using namespace std;

void mdmerazulislam()
{
    int n;cin>>n;
    if(1900<=n)
    {
        cout<<"Division 1"<<endl;
    }
    else if(1600<=n && n<=1899)
    {
        cout<<"Division 2"<<endl;
    }
    else if(1400<=n && n<= 1599)
    {
        cout<<"Division 3"<<endl;
    }
    else{
        cout<<"Division 4"<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--)
    {
        mdmerazulislam();
    }
    
    return 0;
}