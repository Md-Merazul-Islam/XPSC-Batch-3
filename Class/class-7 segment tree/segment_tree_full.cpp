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

const int MX = 1e6 + 5;

class Node
{
public:
    int ans, open, close;
    Node(int a, int o, int c)
    {
        ans = a;
        open = o;
        close = c;
    }
    Node()
    {
        ans = 0;
        open = 0;
        close = 0;
    }
};

Node tree[3 * MX];

Node merge(Node a, Node b)
{
    int ans = min(a.open, b.close);
    a.open -= ans;
    b.close -= ans;
    Node n(a.ans + b.ans + ans, a.open + b.open, a.close + b.close);
    return n;
}

void build(int node, int l, int r, string &s)
{
    if (l == r)
    {
        if (s[l] == '(')
        {
            tree[node].open = 1;
            tree[node].close = 0;
        }
        else
        {
            tree[node].close = 1;
            tree[node].open = 0;
        }
        return;
    }
    int mid = (l + r) / 2;
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    build(leftNode, l, mid, s);
    build(rightNode, mid + 1, r, s);
    tree[node] = merge(tree[leftNode], tree[rightNode]);
}

Node query(int node, int l, int r, int a, int b)
{
    if (l > b || r < a)
        return Node(0, 0, 0);
    if (l >= a && r <= b)
        return tree[node];

    int mid = (l + r) / 2;
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    return merge(query(leftNode, l, mid, a, b), query(rightNode, mid + 1, r, a, b));
}

void mdmerazulislam()
{
    string s;
    cin >> s;
    int n = s.length();
    int t;
    cin >> t;
    build(1, 0, n - 1, s);
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        Node result = query(1, 0, n - 1, a, b);
        cout << result.ans *2<< endl;
    }
}

int main()
{
    fast;

    mdmerazulislam();

    return 0;
}
