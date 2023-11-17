#include <iostream>
using namespace std;

void printTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int lines;
    cin >> lines;

    if (lines < 1) {
        return 0;
    }

    printTriangle(lines);

    return 0;
}
