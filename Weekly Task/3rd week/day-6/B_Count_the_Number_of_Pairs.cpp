#include <bits/stdc++.h>

using namespace std;

int check(string &s, int n, int k)
{
    map<char, int> up, low;

    for (int i=0; i<n; i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
           low[s[i]]++;
        }
        else
        {
            up[s[i]+32]++;
        }
    }
    int ans = 0;

    for (int i = 'a'; i <= 'z'; i++) 
    {
        ans += min(up[i], low[i]);
        int dif = abs(up[i] - low[i]);
        ans += min(dif / 2, k);
        k -= min(dif / 2, k);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << check(s, n, k) << endl;
    }
    return 0;
}
