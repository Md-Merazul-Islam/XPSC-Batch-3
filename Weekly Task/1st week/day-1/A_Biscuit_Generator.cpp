#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int cnt = 0;
    int A = a;
    while (A <= t + 0.5)
    {
        cnt += b;
        A += a;
    }
    cout << cnt << endl;
    return 0;
}