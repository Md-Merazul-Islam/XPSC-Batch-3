#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        map<int,vector<int>>v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v[a[i]].push_back(i);
        }
        while (m--)
        {
            int ai,aj;cin>>ai>>aj;
            if(v[ai].empty() ||v[aj].empty() )
            {
                cout<<"NO"<<endl;continue;
            }
            if(ai==aj)
            {
                cout<<"YES"<<endl;continue;
            }
            if(v[ai].front()< v[aj].back())
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}