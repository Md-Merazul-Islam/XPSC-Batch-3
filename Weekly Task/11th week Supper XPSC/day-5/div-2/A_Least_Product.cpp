#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

void mdmerazulislam()
{
    int n;
    cin >> n;
    vi a(n);

    int neg = 0;
    bool zero = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
            zero = true;
        else if (a[i] < 0)
            neg++;
    }
    if (zero)
        cout << 0 << endl;
    else
    {
        if (neg % 2 == 0)
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
        else
            cout << 0 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        mdmerazulislam();
    }

    return 0;
}
