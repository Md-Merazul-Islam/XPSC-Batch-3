// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define pq priority_queue
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// #define pb push_back
// #define in insert
// #define vpi vector<pair<int,int>>
// #define fori for(int i=0;i<n;i++)
// #define srt v.begin(),v.end()
// #define all(v) v.begin(),v.end()
// #define nl "\n"
// #define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);

// void mdmerazulislam()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     ll mx = -1;
//     set<ll> st;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         st.insert(a[i]);
//         mx = max(mx, a[i]);
//     }

//     if (st.size() == 1)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     ll ans = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == mx)
//         {
//             if (i - 1 >= 0)
//             {
//                 if (a[i - 1] != mx)
//                 {
//                     ans = i+1;break;
//                 }
//             }
//             if(i+1<n)
//             {
//                 if(a[i+1]!=mx)
//                 {
//                     ans=i+1;break;
//                 }
//             }
//         }
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         mdmerazulislam();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void mdmerazulislam()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ind = -1, mx = -1;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        st.insert(a[i]);
    }
    if (st.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {

            if ((i > 0 && a[i] > a[i - 1]) || (i < n - 1 && a[i] > a[i + 1]))
            {
                ind = i + 1; 
                break;       
            }
        }
    }
    cout << ind << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}
