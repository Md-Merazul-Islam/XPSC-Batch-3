#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string a, b;
        cin >> a >> b;
        int m = a.size();
        int n = b.size();
        if (a[m - 1] == 'M' || b[n - 1]=='M')
        {
            if (a[m - 1] == 'L')
            {
                cout << ">" << endl;
            }
            else if (b[n - 1] == 'L')
            {
                cout << "<" << endl;
            }
            else if (a[m - 1] == 'S')
            {
                cout << "<" << endl;
            }
            else if (b[n - 1] == 'S')
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if (a[m - 1] == 'S')
            {
                if (b[n - 1] == 'S')
                {

                    if (n == m)
                    {
                        cout << "=" << endl;
                    }
                    else if (m > n)
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (b[n - 1] == 'S')
                {
                    cout << ">" << endl;
                }
                else
                {
                    if (m == n)
                    {
                        cout << "=" << endl;
                    }
                    else if (m > n)
                    {
                        cout << ">" << endl;
                    }
                    else
                    {
                        cout << "<" << endl;
                    }
                }
            }
        }
    }
    return 0;
}
