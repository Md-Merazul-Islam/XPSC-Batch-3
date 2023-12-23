/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 			3.14159265359
#define dmin 		1e-9
#define dd 			double
#define ll 			long long
#define yes 		cout<<"YES\n"
#define no 			cout<<"NO\n"
#define pb 			push_back
#define vi 			vector<ll>
#define vpi 		vector<pair<int,int>>
#define srt(a) 		sort(a.begin(),a.end())
#define rsrt(a) 		sort(a.rbegin(),a.rend())
#define nl 			"\n"
#define fast  		ios_base::sync_with_stdio(false),cin.tie(NULL);
#define loop(i, a, b)for(int i = (a); i < (b); ++i)
#define rloop(i, a, b)for(int i = (a); i <= (b); ++i)


void mdmerazulislam()
{
    int n; cin>>n;
        bool x_p=false,x_n=false,y_p=false,y_n=false;
    while(n--){
        int x,y;cin>>x>>y;
        if(x<0)x_n=true; if(x>0)x_p=true;
        if(y<0)y_n=true;if(y>0)y_p=true;

    }
        if(x_n&&x_p&&y_n&&y_p)no;else yes;

}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}