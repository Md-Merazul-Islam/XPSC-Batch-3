#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;cin>>x;
    auto it_up = upper_bound(a.begin(),a.end(),x);
    auto it_low = lower_bound(a.begin(),a.end(),x);
    int ans1 = it_up - a.begin();
    int ans2 = it_low - a.begin();
    cout<<ans1-ans2<<endl;
    return 0;
}