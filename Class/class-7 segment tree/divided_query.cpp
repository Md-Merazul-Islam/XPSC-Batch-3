#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+7;
int tree[3*mx];

void buildSegmentTree(vector<int>&a, int node , int l, int r)
{
    if (l==r){
        tree[node]=a[l];
        return;
    }
    int leftNode = node*2;
    int rightNode= node *2+1;
    int mid = (l+r)/2;
    buildSegmentTree(a,leftNode,l,mid);
    buildSegmentTree(a,rightNode,mid+1,r);
    tree[node]= tree[leftNode]+tree[rightNode];
}


int main()
{

    int n;cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    buildSegmentTree(a,1,0,n-1);
    for(int i=1; i<3*n; i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}