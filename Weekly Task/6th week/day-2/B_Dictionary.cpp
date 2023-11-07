// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// #define ll long long
// #define dd double
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define f first
// #define scd second
// #define pb push_back
// using namespace std;
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     map<string, int> mp;
//     int ans = 1;
//     string s(2,'0');

//     for (char i = 'a'; i <= 'z'; i++)
//     {
//         for (char j = 'a'; j <= 'z'; j++)
//         {
//             if(i==j)continue;
//             s[0] = i;
//             s[1] = j;

//             mp[s] = ans++;
//         }
//     }
//     for (char i = 'a'; i <= 'z'; i++)
//     {
//         s[0] = i, s[1] = i;
//         mp[s] = ans++;
//     }

//     while (t--)
//     {
//         string str;
//         cin >> str;
//         cout << mp[str] << endl;
//     }

//     return 0;
// }




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

    char a,b;
    cin>>a>>b;
    int ans =0;
    int p=a-'a';
    ans = 25 * (p) + (b-'a'+1);
    if(b>a)
    ans --;
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}