#include <bits/stdc++.h>

using namespace std;
int main()
{
    string n;
    cin >> n;
    string ans = "";
    int y = 4 - n.size();
    for (int i = 1; i <= y; i++)
    {
        ans += "0";
    }
    cout << ans << n << endl;
    return 0;
}