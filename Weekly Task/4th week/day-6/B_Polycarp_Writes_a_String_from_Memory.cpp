#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char>st;
        int ans = 1;
        for(char c: s)
        {
            if(st.count(c)==0)
            {
                if(st.size()==3)
                {
                    ans++;
                    st.clear();
                }
                st.insert(c);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
