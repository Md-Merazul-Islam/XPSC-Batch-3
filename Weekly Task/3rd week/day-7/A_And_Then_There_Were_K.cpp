#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;cin>>t; while(t--)
    {
        int n;cin>>n;
        int cnt =0;
        while(n>1)
        {
              n>>=1;
                cnt++;
        }
        int ans = 1<<cnt;
        cout<<ans-1<<endl;
    }
    return 0;
}