
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string tmp = "meow";
        string nw = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                nw += s[i];
            }
            else
            {
                continue;
            }
        }
        
       if(tmp==nw)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
