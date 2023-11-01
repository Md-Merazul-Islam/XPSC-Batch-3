/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

void solve()
{
    string s;
    cin >> s;
    set<char> st;
    int day = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.count(s[i]) == 0)
        {
            if (st.size() == 3)
            {
                day++;
                st.clear();
            }
            st.insert(s[i]);
        }
    }
    cout << day << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}