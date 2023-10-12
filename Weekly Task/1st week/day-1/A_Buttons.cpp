#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a + b << endl;
    }
    else
    {
        int mx = max(a, b);
        cout << mx * 2 - 1 << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int a = (x * 2 - 1);
    int b = x + y;
    int c = (y * 2 - 1);

    if (x < 3 || y > 20)
    {
        cout << " ";
    }
    else if (x == y)
    {
        cout << x + y;
    }
    else
    {
        cout << max(max(a, b), c);
    }

    return 0;
}
