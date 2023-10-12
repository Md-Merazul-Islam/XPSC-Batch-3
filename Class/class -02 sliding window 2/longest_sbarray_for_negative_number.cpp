#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;cin>>n;int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int k,sum=0;
    cin>>k;
    map<int,int>mp;
    for (int i=0; i<n; i++)
    {
        sum+=a[i];
        if(sum==k)
        {
            cout<<i+1<<endl;
        }
        if(sum>k)
        {
            if(mp.find(sum-k) != mp.end())
            {
                cout<<i-mp[sum-k]<<endl;
            }
        }
        if(mp.find(sum-k)== mp.end())

        {
            mp[sum]=i;
        }

    }
    return 0;
}