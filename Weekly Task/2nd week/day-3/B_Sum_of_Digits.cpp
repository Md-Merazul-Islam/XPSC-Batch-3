#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.size();
    while (n > 1)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        n = s.size();
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}