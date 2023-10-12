#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b, int c)
{
    int n = min(a, min(b, c));
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                sum += gcd(i, j, k);
            }
        }
    }

    cout << sum << endl;
    return 0;
}