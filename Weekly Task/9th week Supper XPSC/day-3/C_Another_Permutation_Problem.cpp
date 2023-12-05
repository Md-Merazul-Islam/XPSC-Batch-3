#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<int> inputs;
    int val;

    while (cin >> val)
    {
        inputs.push_back(val);
    }

    for (size_t i = 1; i < inputs.size(); ++i)
    {
        int n = inputs[i];
        int k = sqrt(2 * n + 1);
        int result = (n * (4 * n * n - 6 * n - 10) - k * (2 * k * k + 3 * k - 8)) / 12 + n * k;
        cout << result << endl;
    }

    return 0;
}
