// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define pq priority_queue
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define in insert
// #define vpi vector<pair<int, int>>
// #define fori for (int i = 0; i < n; i++)
// #define srt v.begin(), v.end()
// #define all(v) v.begin(), v.end()
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

// void mdmerazulislam()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n + 1];
//     a[0] = 0;
//     for (int i = 1; i <=n ; i++)
//     {
//         cin >> a[i];
//     }
//     int mx = 0;
//     bool ok = false;
//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, a[i + 1] - a[i]);
//         ok = true;
//     }
//     if (ok)
//         mx = max(mx, (k - a[n]) * 2);

//     cout << mx << nl;
// }

// int main()
// {
//     fast;

//     int t;
//     cin >> t;
//     while (t--)
//         mdmerazulislam();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> arrr(n + 1);
        arrr[0] = 0;
        for (int i = 1; i <=n ; i++)
        {
            cin >> arrr[i];
        }
        int mex = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            mex = max(mex, arrr[i + 1] - arrr[i]);
            flag = true;
        }

        if (flag)
        {
            int tmp = (k - arrr[n]) * 2;
            mex = max(mex, tmp);
        }

        cout << mex << endl;}

    return 0;
}
