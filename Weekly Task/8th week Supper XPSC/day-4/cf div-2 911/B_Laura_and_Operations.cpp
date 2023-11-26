// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// using namespace std;
// #define PI 			3.14159265359
// #define dmin 		1e-9
// #define dd 			double
// #define ll 			long long
// #define pq 			priority_queue
// #define yes 		cout<<"YES\n"
// #define no 			cout<<"NO\n"
// #define pb 			push_back
// #define vi 			vector<ll>
// #define vpi 		vector<pair<int,int>>
// #define fori(i, a, b)for(int i = (a); i < (b); ++i)
// #define repi(i, a, b)for(int i = (a); i <= (b); ++i)
// #define srt 		v.begin(),v.end()
// #define all(v) 		v.begin(),v.end()
// #define nl 			"\n"
// #define fast  		ios_base::sync_with_stdio(false),cin.tie(NULL);

// void mdmerazulislam()
// {
//     int a,b,c;cin>>a>>b>>c;
//     int x = abs(b-c);
//     if(x%2==0)
//     {
//         cout<<1<<" ";
//     }
//     else{
//         cout<<0<<" ";
//     }
//     int y= abs(a-c);
//     if(y%2==0)
//     {
//         cout<<1<<" ";
//     }
//     else{
//         cout<<0<<" ";
//     }
//     int z = abs(a-b);
//     if(z%2==0)
//     {
//         cout<<1<<endl;
//     }
//     else {
//         cout<<0<<endl;
//     }
// }

// int main()
// {
//     fast;

//     int t;cin>>t;
//     while(t--)
//     {
//         mdmerazulislam();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
     

        int tmp1 = abs(b - c);
        cout << ((tmp1 % 2 == 0) ? 1 : 0) << " ";

        int tmp2 = abs(a - c);
        cout << ((tmp2 % 2 == 0) ? 1 : 0) << " ";

        int tmp3 = abs(a - b);
        cout << ((tmp3 % 2 == 0) ? 1 : 0) << endl;
    }

    return 0;
}