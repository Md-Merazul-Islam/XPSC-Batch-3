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
  int n, a, q;
        cin >> n >> a >> q; 

        string s;
        cin >> s; 

        int k = 0, l = 0, m = 0;
        for (char x : s) {
            if (x != '+') {
                k++;
            } else {
                m++;
                l += (k < 1);
                k -= (k > 0);
            }
        }

        cout << ((m < n - a) + (l < n - a) == 0 ? "YES" : ((m < n - a) + (l < n - a) == 1 ? "MAYBE" : "NO")) << endl;
   
}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}