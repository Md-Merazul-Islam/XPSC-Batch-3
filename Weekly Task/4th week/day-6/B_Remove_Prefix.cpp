#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int visited = 0;
        set<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            s.insert(a[i]);
            visited++;
            if (s.size() < visited)
            {
                break;
            }
        }

        cout << n - s.size() << endl;
    }
    return 0;
}