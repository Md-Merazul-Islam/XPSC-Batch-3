
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    stack<string> st;
    set<string> set;
    string ans = "";

    while (t--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    while (!st.empty())
    {
        string str = st.top();
        st.pop();
        if (set.find(str) == set.end())
        {
            set.insert(str);
            if (str.size() >= 2)
            {
                cout << str.substr(str.length() - 2);
            }
        }
    }

    return 0;
}
