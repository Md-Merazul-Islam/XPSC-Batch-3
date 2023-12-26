<<<<<<< HEAD

/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
**************************************************************/
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)


void mdmerazulislam()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(k%2==0){
        srt(s);
        cout<<s<<endl;
    }
    else{
        string od="",ev="";
        for(int i=0; i<n;i++){
            if(i%2==0){
                od+=s[i];
            }
            else{
                ev+=s[i];
            }
        }
        srt(od);srt(ev);
        int odd=0,even=0;
        for (int i=0; i<n; i++){
            if(i%2==0){
                cout<<od[odd++];
            }else{
                cout<<ev[even++];
            }
        }
        nl;
    }

}

int main()
{
    fast;
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
=======

/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
**************************************************************/
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)


void mdmerazulislam()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(k%2==0){
        srt(s);
        cout<<s<<endl;
    }
    else{
        string od="",ev="";
        for(int i=0; i<n;i++){
            if(i%2==0){
                od+=s[i];
            }
            else{
                ev+=s[i];
            }
        }
        srt(od);srt(ev);
        int odd=0,even=0;
        for (int i=0; i<n; i++){
            if(i%2==0){
                cout<<od[odd++];
            }else{
                cout<<ev[even++];
            }
        }
        nl;
    }

}

int main()
{
    fast;
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
>>>>>>> 79256564d9c157407412ea3ba98b297fe71859b2
}