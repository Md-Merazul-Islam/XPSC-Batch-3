#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;cin>>t;
    map<int,int>mp;
    for(int i=0; i<t; i++)
    {
        int n;cin>>n;
        mp[n]++;
    }
    for(auto m : mp)
    {
        if(m.second==1)
        {
            cout<<m.first<<endl;
        }
    }
    return 0;
}