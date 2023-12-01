#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 7;
int tree[3 * mx];

void buildSegmentTree(vector<int> &a, int node, int l, int r)
{
    if (l == r)
    {
        tree[node] = a[l];
        return;
    }
    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (l + r) / 2;
    buildSegmentTree(a, leftNode, l, mid);
    buildSegmentTree(a, rightNode, mid + 1, r);
    tree[node] = tree[leftNode] + tree[rightNode];
}

int query(int node, int l, int r, int x, int y)
{
    if (r < x || l > y)
    {
        return 0;
    }
    if (l >= x && r <= y)
    {
        return tree[node];
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    return query(leftNode, l, mid, x, y) + query(rightNode, mid + 1, r, x, y);
}

void update(int node, int l, int r, int indx, int val)
{
    if (l > indx || r < indx)
    {
        return;
    }
    if (l == r && l == indx)
    {
        tree[node] = val;
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    update(leftNode, l, mid, indx, val);
    update(rightNode, mid + 1, r, indx, val);
    tree[node] = tree[leftNode] + tree[rightNode];
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    buildSegmentTree(a, 1, 0, n - 1);
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            int idx, val;
            cin >> idx >> val;
            idx--;
            update(1, 0, n - 1, idx, val);
            for (int i = 1; i <= 7; i++)
            {
                cout << tree[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int x, y;
            cin >> x >> y;
            x--, y--;
            cout << query(1, 0, n - 1, x, y) << endl;
        }
    }

    return 0;
}
