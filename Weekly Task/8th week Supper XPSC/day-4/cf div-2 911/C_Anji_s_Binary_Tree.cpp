

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int testCases;
// //     cin >> testCases;

// //     while (testCases--) {
// //         int numVertices;
// //         cin >> numVertices;
// //         string letters;
// //         cin >> letters;
// //         letters = " " + letters;

// //         vector<int> leftChild(numVertices + 1), rightChild(numVertices + 1), steps(numVertices + 1);

// //         for (int i = 1; i <= numVertices; i++) {
// //             cin >> leftChild[i] >> rightChild[i];
// //         }

// //         steps[1] = 0;
// //         queue<int> q;
// //         q.push(1);

// //         while (!q.empty()) {
// //             int currentNode = q.front();
// //             q.pop();

// //             if (leftChild[currentNode] != 0) {
// //                 steps[leftChild[currentNode]] = steps[currentNode] + (letters[currentNode] != 'L');
// //                 q.push(leftChild[currentNode]);
// //             }

// //             if (rightChild[currentNode] != 0) {
// //                 steps[rightChild[currentNode]] = steps[currentNode] + (letters[currentNode] != 'R');
// //                 q.push(rightChild[currentNode]);
// //             }
// //         }

// //         int minSteps = INT_MAX;
// //         for (int i = 1; i <= numVertices; i++) {
// //             if (leftChild[i] == 0 && rightChild[i] == 0) {
// //                 minSteps = min(minSteps, steps[i]);
// //             }
// //         }

// //         cout << minSteps << "\n";
// //     }

// //     return 0;
// // }

/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

// #include <bits/stdc++.h>?
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define pq priority_queue
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<int, int>>
// #define fori(i, a, b) for (int i = (a); i < (b); ++i)
// #define repi(i, a, b) for (int i = (a); i <= (b); ++i)
// #define srt v.begin(), v.end()
// #define all(v) v.begin(), v.end()
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

// void mdmerazulislam()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     s = " " + s;
//     vi l(n + 1), r(n + 1), u(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> l[i] >> r[i];
//     }

//     u[1] = 0;
//     queue<int> q;
//     q.push(1);
//     while (!q.empty())
//     {
//         int x = q.front();
//         q.pop();
//         if (l[x] != 0)
//         {
//             u[l[x]] = u[x] + (s[x] != 'L');
//             q.push(l[x]);
//         }

//         if (r[x] != 0)
//         {
//             u[r[x]] = u[x] + (s[x] != 'R');
//             q.push(r[x]);
//         }
//     }
//     ll mn = INT_MAX;
//     for (int i = 1; i <= n; i++)
//     {
//         if (l[i] == 0 && r[i] == 0)
//         {
//             mn = min(mn, (ll)u[i]);
//         }
//     }

//     cout << mn << endl;
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

int minOperationsToLeaf(vector<int> &left, vector<int> &right, string &s)
{
    int n = left.size();
    vector<int> opsToLeaf(n, -1);

    queue<int> q;
    q.push(1); 
    opsToLeaf[1] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        if (left[node] != 0)
        {
            opsToLeaf[left[node]] = opsToLeaf[node] + (s[node] != 'L');
            q.push(left[node]);
        }
        if (right[node] != 0)
        {
            opsToLeaf[right[node]] = opsToLeaf[node] + (s[node] != 'R');
            q.push(right[node]);
        }
        // else if (s[node] == 'U')
        // {
        //     if (node != 1)
        //     { // If not the root node
        //         opsToLeaf[node / 2] = opsToLeaf[node];
        //         q.push(node / 2);
        //     }
        // }
    }

    int minOps = INT_MAX;
    for (int i = 1; i < n; ++i)
    {
        if (left[i] == 0 && right[i] == 0)
        { // Leaf node
            minOps = min(minOps, opsToLeaf[i]);
        }
    }

    return minOps;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        s = " " + s;

        vector<int> left(n + 1), right(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> left[i] >> right[i];
        }

        int minOps = minOperationsToLeaf(left, right, s);
        cout << minOps << endl;
    }

    return 0;
}
