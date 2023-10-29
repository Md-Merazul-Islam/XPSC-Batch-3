// #include <bits/stdc++.h>

// using namespace std;

// bool isvalid(int dif, vector<int> &a, int n, int c)
// {
//     int cnt = 1;
//     int last = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (abs(a[i] - a[last]) >= dif) 
//         {
//             cnt++;
//             last = i;
//         }
//     }
//     return cnt>=c;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, c;
//         cin >> n >> c;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a.begin(), a.end());
//         int l = 0, r = INT_MAX;
//         int ans;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (isvalid(mid, a, n, c))
//             {

//                 ans = mid;
//                 l = mid + 1;
//             }
//             else
//             {
//                 r = mid - 1;
//             }
//         }
//         cout<<ans<<endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

bool isvalid (int mid, int a[], int n, int c){
    int cnt= 1, last =0;
    for (int i=0; i<n; i++)
    {
        if(abs(a[i]-a[last])>=mid)
        {
            cnt++, last=i;
        }
    }
    return cnt>=c;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,c; cin>>n>>c;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);
        int l =0, r = INT_MAX;
        int ans;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(isvalid(mid,a,n,c))
            {
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}