// // #include <bits/stdc++.h>
// // using namespace std;
// // #define PI 3.14159265359
// // #define dmin 1e-9
// // #define dd double
// // #define ll long long
// // #define pq priority_queue
// // #define yes cout << "YES\n"
// // #define no cout << "NO\n"
// // #define pb push_back
// // #define in insert
// // #define vpi vector<pair<int, int>>
// // #define fori for (int i = 0; i < n; i++)
// // #define srt v.begin(), v.end()
// // #define all(v) v.begin(), v.end()
// // #define nl "\n"
// // #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

// // ll gcd(ll a, ll b)
// // {
// //     return __gcd(a, b);
// // }
// // ll lcm(ll a, ll b)
// // {
// //     return ((a / gcd(a, b) * b));
// // }

// // int main()
// // {
// //     fast;
// //     ll n, a, b, p, q;
// //     cin >> n >> a >> b >> p >> q;

// //     ll ans = 0;
// //     ans += ((n / a) * p);
// //     ans += ((n / b) * q);
// //     ll LCM = lcm(a, b), sm;
// //     sm = n / LCM;
// //     ans -= (sm * (p + q));
// //     ans += (sm * (max(p, q)));
// //     cout << ans << endl;

// //     return 0;
// // }

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

// }

// int main()
// {
//     fast;

//     ll n,a,b,p,q;
//     cin>>n>>a>>b>>p>>q;

//     ll ans=0;
//     ans += ((n/a) *p);
//     ans += ((n/b) *q);

//     ll gcd = __gcd(a,b);
//     ll lcm = (a/(gcd)*b);

//     ll same ;
//     same= n/lcm;

//     ans -= (same*(p+q));
//     ans +=(same*(max(p,q)));
//     cout<<ans<<endl;

//     return 0;
// }

#include <stdio.h>

bool jadu_matrix(int matrix[101][101], int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((i == j || i + j == N - 1) && matrix[i][j] != 1)
            {
                return false;
            }
            else
            {
                if (matrix[i][j] != 0)
                    return true;
            }
        }
    }
    return "YES";
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[101][101];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    if(jadu_matrix(matrix, N, M)){
        printf("YES\n");
    }else{
         printf("NO\n");
    }

    return 0;
}