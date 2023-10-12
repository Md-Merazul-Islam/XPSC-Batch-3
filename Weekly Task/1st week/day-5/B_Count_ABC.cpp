#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;cin>>a;
    int cnt =0;
    for (int i=0; i<n; i++)
    {
        if(a[i]=='A' && a[i+1]=='B'&& a[i+2]=='C')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}