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
//     int a[n+1], h[n+1];

//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     for (int i = 1; i <= n; i++)
//         cin >> h[i];

//     int ans = 0;
//     for (int i = 1; i <= n;)
//     {
//         int j = i + 1;
//         while (j <= n && h[j - 1] % h[j] == 0)
//             j++;
//         int sum = 0, u = i, v = i;
//         while (u < j)
//         {
//             sum += a[u++];
//             while (sum > k && v <= u)
//                 sum -= a[v++];
//             ans = max(ans, u - v);
//         }
//         i = j;
//     }
//     cout << ans << endl;
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
//     ll n,k;cin>>n>>k;
//     vector<ll>f(n+1),h(n+1);
//     for(int i=1; i<=n; i++)
//     {
//         cin>>f[i];
//     }
//     for(int i=1; i<=n; i++)
//     {
//         cin>>h[i];
//     }
//     ll ans =0;
//     for(int i=1; i<=n; i++)
//     {
//         if(f[i]<=k)
//         {
//             ans=1;break;
//         }
//     }
//     if(ans==0)
//     {
//         cout<<0<<endl;
//         return;
//     }
    
//     vector<int>v;
//     int i=1;
//     while(i<=n-1)
//     {
//         int s=i, e=i;
//         while(i<=n && h[i]%h[i+1]==0)
//         {
//             i++;
//         }
//         v.pb(s);
//         v.pb(i);
//         i++;
//     }

//     vector<ll> psum(n + 1, 0);
//     for (int i=1; i<=n; i++)
//     {
//         psum[i]= psum[i-1]+f[i];
//     }
//     ll vs = v.size();
//     for (int i=0; i<vs; i+=2)
//     {
//         int s= v[i],e= v[i+1];
//         ll l = s,r=s;
//         ll sum =0;
//         while(r<=e)
//         {
//             sum+=f[r];
//             while(sum>k){
//                 sum-=f[l];
//                 l++;
//             }
//             ans = max(ans,r-l+1);r++;
//         }
//     }
//     cout<<ans<<endl;
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

#include <iostream>
#include <vector>

using namespace std;

void Solve() {
    int N, K;
    cin >> N >> K;
    int a[N + 1];
    int h[N + 1];

    for (int i = 1; i <= N; i++)
        cin >> a[i];
    for (int i = 1; i <= N; i++)
        cin >> h[i];

    int answer = 0;

    for (int i = 1; i <= N; i++) {
        if (a[i] <= K) {
            answer = 1;
            break;
        }
    }

    if (answer == 0) {
        cout << 0 << endl;
        return;
    }

    vector<int> v;
    int i = 1;
    while (i <= N - 1) {
        int s = i;
        int e = i;

        while (i < N && h[i] % h[i + 1] == 0) {
            i++;
        }
        v.push_back(s);
        v.push_back(i);
        i++;
    }

    int prefix[N + 1] = {0};
    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    int n = v.size();
    for (int j = 0; j < n; j += 2) {
        int s = v[j];
        int e = v[j + 1];
        int l = s;
        int r = s;
        int sum = 0;
        while (r <= e) {
            sum += a[r];
            while (sum > K) {
                sum -= a[l];
                l++;
            }
            answer = max(answer, r - l + 1);
            r++;
        }
    }
    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
        Solve();

    return 0;
}
