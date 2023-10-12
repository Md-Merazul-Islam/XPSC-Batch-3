#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {

        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve(string &s, int x)
{
    string tmp = s;
    int count = 0;
    while (true)
    {
        int mint = stoi(tmp.substr(3, 2));
        int hh = stoi(tmp.substr(0, 2));
        mint += x;
        hh += mint / 60;
        mint %= 60;
        hh %= 24;
        if (hh < 10)
        {
            tmp = "0" + to_string(hh);
        }
        else
        {
            tmp = to_string(hh);
        }
        if (mint < 10)
        {
            tmp += ":0" + to_string(mint);
        }
        else
        {
            tmp += ":" + to_string(mint);
        }
        if (ispalindrome(tmp))
        {
            count++;
        }
        if (tmp == s)
        {
            break;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int x;
        cin >> s >> x;
        solve(s, x);
    }
    return 0;
}