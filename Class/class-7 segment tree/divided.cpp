/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
const int mx = 1e5 + 7;
int tree[4 * mx]; 

void buildSegmentTree(vector<int> &a, int node, int l, int r) {
    if (l == r) {
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    buildSegmentTree(a, 1, 0, n - 1);

    for (int i = 1; i < 4 * n; i++) {
        cout << tree[i] << " ";
    }
    cout << endl;

    return 0;
}