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
// int n, m;
// void solve()
// {
//     vector<int>a(n);
//     for (int i=0; i<n; i++)cin>>a[i];

//     int l=0, r= INT_MAX;
//     int ans =0;
//     while(l<=r)
//     {
//         int capacity = l+(r-l)/2;
//         int container =1;
//         int sum =0;
//         for(int i=0; i<n; i++)
//         {
//             if(capacity < a[i])
//             {
//                 container = INT_MAX;
//                 break;
//             }
//             sum+=a[i];
//             if(sum>capacity)
//             {
//                 container++;
//                 sum=a[i];
//             }
//         }
//         if(container <=m)
//         {
//             ans = capacity;
//             r= capacity-1;
//         }
//         else{
//             l = capacity+1;
//         }
//     }
//     cout<<ans<<endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     while (cin >> n >> m)
//     {
//         solve();
//     }

//     return 0;
// }

/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;
int n, m;
void mdmerazulislam()
{
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = INT_MAX;
    int ans = 0;
    while (l <= r)
    {
        int sum = 0;
        int container = 1;
        int mid = l + (r - l) / 2;
        for (int i = 0; i < n; i++)
        {
            if (mid < a[i])
            {
                container = INT_MAX;
                break;
            }
            sum += a[i];
            if (sum > mid)
            {
                container++;
                sum = a[i];
            }
        }
        if (container <= m)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> n >> m)
    {
        mdmerazulislam();
    }

    return 0;
}