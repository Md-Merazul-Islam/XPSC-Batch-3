// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

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
// #define vpi vector<pair<int, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
// const int N = 1e5 + 5;

// void DFS(ll u, vector<vi> &adj, vi &leaves, vector<bool> &visited)
// {
//     visited[u] = true;
//     bool isLeaf = true;
//     for (ll v : adj[u])
//     {
//         if (!visited[v])
//         {
//             isLeaf = false;
//             DFS(v, adj, leaves, visited);
//         }
//     }
//     if (isLeaf)
//         leaves[u]++;
// }

// // void DFS(int u)
// // {
// //     //section 1: action just after entering noden u
// //     cout<<"Visiting node "<<u<<endl;
// //     visited[u] = true;

// //     for (int v: adj[u])
// //     {
// //         //section 2: actions before entering a new neighbor
// //         if(visited[v]== true) continue;
// //         DFS(v);
// //     }

// // }
// void mdmerazulislam()
// {
//     int n;
//     cin >> n;
//     vector<vi> edges(n - 1, vi(2));
//     for (int i = 0; i < n - 1; ++i)
//     {
//         cin >> edges[i][0] >> edges[i][1];
//     }
//     vector<vi> graph(n);
//     vector<bool> visited(n, false);
//     vi level(n, 0);
//     for (auto &edge : edges)
//     {
//         ll u = edge[0] - 1;
//         ll v = edge[1] - 1;
//         graph[u].push_back(v);
//         graph[v].push_back(u);
//     }
//     DFS(0, graph, level, visited);
//     ll result = 0;
//     for (ll val : level)
//     {
//         result += ceil(static_cast<double>(val) / 2);
//     }
//     cout << result - 1 << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         mdmerazulislam();
//     }

//     return 0;
// }


/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

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
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

int ans (ll n, vpi adj){
    map<ll,ll>mp;
    for(auto val : adj)
    {
        mp[val.first]++,mp[val.second]++;
    }
    ll tmp =0;
    for (auto u : mp)
    {
        ll val = u.second;
        if(val ==1)tmp ++;
    }
    return static_cast<int>((tmp + 1) / 2.0);
}

void mdmerazulislam()
{
    int n; cin>>n;
    vpi adj(n - 1);
    for (int i=0; i<n-1; i++){
        cin>>adj[i].first >> adj[i].second;
    }
    cout<<ans(n,adj)<<nl;

}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();
    return 0;
}