#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void sln() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    int ns = n / 2 + 1;
    for (int i = 0; i < ns - 1; ++i) {
        string x = "1" + string(i, '0') + "3" + string(ns - 2 - i, '0');
        cout << pow(stoll(x), 2) << endl;
    }
    for (int i = 0; i < ns - 1; ++i) {
        string x = "3" + string(i, '0') + "1" + string(ns - 2 - i, '0');
        cout << pow(stoll(x), 2) << endl;
    }
    string x = "14" + string(ns - 2, '0');
    cout << pow(stoll(x), 2) << endl;
}

int main() {
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        sln();
    }
    return 0;
}
