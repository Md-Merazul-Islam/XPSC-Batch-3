
// /**************************************************************
// **               BISMILLAH HIR RAHMAN NIR RAHIM              **
// **                  Author: Md Merazul Islam                 **
// **                         CST, MPI                          **
// **                  Sreepur, Gazipur, Dhaka                  **
// **************************************************************/
// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<ll, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nn "\n"
// #define nl cout << "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
// void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}


// void mdmerazulislam()
// {
//     ll a,b;cin>>a>>b;
//     if((a%2==0 && b%2==0) || (a%2==01 && b%2==01))
//     {
//         cout<<"Bob"<<endl;
//     }
//     else{
//         cout<<"Alice"<<endl;
//     }

// }

// int main()
// {
//     fast;
    
    
//         int t;
//         cin >> t;
//         while (t--)mdmerazulislam();
    
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1) ? "Bob" : "Alice") << endl;
    }

    return 0;
}
