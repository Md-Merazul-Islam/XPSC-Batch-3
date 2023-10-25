#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       string s;cin>>s;
       int x = stoi(s);
       int n = s.size();
       int y= pow(10,(n-1));
       cout<<x-y<<endl;
    }

    return 0;
}
