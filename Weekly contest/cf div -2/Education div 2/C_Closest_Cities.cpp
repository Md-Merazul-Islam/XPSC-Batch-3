#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        long long n, rez = 0;
        cin >> n;
        
        vector<int> a(n), T(n + 1);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = n - 1; i >= 0; i--)
        {
            for (int x = a[i]; x > 0; x -= x & -x)
                rez += T[x];
            for (int x = a[i]; x <= n; x += x & -x)
                T[x] += 1;
        }
        cout << rez << '\n';
    }
    return 0;
}