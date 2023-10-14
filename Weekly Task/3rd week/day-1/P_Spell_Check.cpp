#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        string s;
        cin >> s;
        string nm = "Timur";
        sort(s.begin(), s.end());
        sort(nm.begin(), nm.end());
        bool flag = true;
        if (n > nm.size())
        {
            flag = false;
        }
        else
        {
            for (int i = 0; i < nm.size(); i++)
            {
                if (s[i] != nm[i])
                {
                    flag = false;
                    break;
                }
            }
        }
       cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}