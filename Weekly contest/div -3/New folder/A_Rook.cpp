
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
    string s; cin>>s;
    char col = s[0];
    char row = s[1];
    for (char i ='a'; i<='h'; i++)
    {
        if(i!=col){
            cout<<i<<row<<nl;
        }
    }
    
    for (char i ='1'; i<='8'; i++)
    {
        if(i!=row){
            cout<<col<<i<<nl;
        }
    }

}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}