#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,x=0;
        cin>>a>>b;

        int ans = a^x  + b^x;
        cout<<ans<<endl;
    }
    return 0;
}