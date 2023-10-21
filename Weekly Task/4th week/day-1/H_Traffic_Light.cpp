#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        // string tm= "rggry";
        s = s + s;
        int cnt = 0, MX=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
         
                cnt=0;
                while (s[i] != 'g' &&  i<s.size())
                {
                    i++;
                    cnt++;
                }
                
                MX= max(cnt,MX);
            }
        }
        cout << MX<< endl;
    }

    return 0;
}
