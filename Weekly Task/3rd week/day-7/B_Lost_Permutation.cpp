#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        vector<bool> visited(1005, false);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            visited[a[i]] = true;
        }
        ll mx = *max_element(a.begin(), a.end());
        bool flag = false;
        ll cur = 1, sum = 0;
        while (true)
        {
            if (visited[cur])
            {
                cur++;
                continue;
            }
            sum += cur;
            visited[cur] = true;
            if (sum == k)
            {
                bool tmp = false;
                for (int i = cur; i <= mx; i++)
                {
                    if (!visited[i])
                    {
                        tmp = true;
                        break;
                    }
                }
                if (!tmp)
                {
                    flag = true;
                }
                break;
            }
            cur++;
            if (sum > k)
                break;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
