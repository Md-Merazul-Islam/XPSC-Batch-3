#include <bits/stdc++.h>

using namespace std;
bool checkIsSame(int year)
{
    string s = to_string(year);
    set<int> st;
    for (char c : s)
    {
        if (st.count(c) > 0)
        {
            return false;
        }
        st.insert(c);
    }
    return true;

    // bool frq[10] = {0};
    // while (year > 0)
    // {
    //     int d = year % 10;
    //     if (frq[d])
    //     {
    //         return false;
    //     }
    //     frq[d] = true;
    //     year /= 10;
    // }
    // return true;
}
int main()
{
    int year;
    cin >> year;
    while (true)
    {
        year++;
        if (checkIsSame(year))
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}