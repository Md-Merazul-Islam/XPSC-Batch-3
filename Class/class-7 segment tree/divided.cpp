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

void mdmerazulislam (int node, int l, int r)
{
    cout << node << " " << l << " " << r << endl;
    if (l == r)
        return;
    int leftNode = node*2; //[n*2]
    int rightNode = leftNode+1;//[n*2+1]
    int mid = (l+r)/2;
    mdmerazulislam(leftNode,l,mid);
    mdmerazulislam(rightNode,mid+1,r);

}

int main()
{
    fast;

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mdmerazulislam(1, 0, n - 1);

    return 0;
}