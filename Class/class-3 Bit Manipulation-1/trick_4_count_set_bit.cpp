#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0) {
        ans += n & 1; // and operation
        n >>= 1;      // right shift
    }
    cout << ans << endl;

    return 0;
}
