
#include <bits/stdc++.h>
using namespace std;



int main()
{
 
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int minOperations = 0;
        vector<long long> operations;

        while (true)
        {
            int minValue = *min_element(arr.begin(), arr.end());
            int maxValue = *max_element(arr.begin(), arr.end());

            if (minValue == maxValue)
            {
                break;
            }

            if (minValue % 2 != 0 && maxValue % 2 == 0)
            {
                minOperations++;
                operations.push_back(1);
            }
            else
            {
                minOperations++;
                operations.push_back(0);
            }

            for (int i = 0; i < n; ++i)
            {
                arr[i] = (arr[i] + operations.back()) / 2;
            }
        }

        if (minOperations == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << minOperations << endl;
            if (minOperations <= n)
            {
                for (int i = 0; i < minOperations; ++i)
                {
                    cout << operations[i] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
