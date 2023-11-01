#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << "GOLD" << endl;
    }
    else if (n >= 3 && n < 6)
    {
        cout << "SILVER" << endl;
    }
    else if (n >= 6)
    {
        cout << "BRONZE" << endl;
    }
    return 0;
}