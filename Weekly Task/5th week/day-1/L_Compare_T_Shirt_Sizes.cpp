#include <bits/stdc++.h>

using namespace std;

map<char, int> sizeMap = {{'S', 1}, {'M', 2}, {'L', 3}};

int compareSizes(string s1, string s2) {
    char size1 = s1.back();
    char size2 = s2.back();
    int xCount1 = count(s1.begin(), s1.end(), 'X');
    int xCount2 = count(s2.begin(), s2.end(), 'X');

    if (sizeMap[size1] != sizeMap[size2]) {
        return sizeMap[size1] < sizeMap[size2] ? -1 : 1;
    } else if (xCount1 != xCount2) {
        return xCount1 < xCount2 ? -1 : 1;
    } else {
        return 0;
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int result = compareSizes(s1, s2);

    if (result == 0) {
        cout << "=" << endl;
    } else if (result == -1) {
        cout << "<" << endl;
    } else {
        cout << ">" << endl;
    }

    return 0;
}
