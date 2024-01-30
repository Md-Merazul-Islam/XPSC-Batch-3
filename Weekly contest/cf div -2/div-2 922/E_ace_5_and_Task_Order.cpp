#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<char> result(n);  // to store the results of queries

        int x = 1;  // initial value of x

        // Loop to make 40n queries
        for (int i = 0; i < 40 * n; i++) {
            cout << "? " << x << endl;
            cout.flush();

            char response;
            cin >> response;

            if (response == '=') {
                // If response is '=', the value of x remains unchanged
                break;
            } else if (response == '>') {
                // If response is '>', x increases by 1
                x++;
            } else if (response == '<') {
                // If response is '<', x decreases by 1
                x--;
            }

            result[x - 1] = response;  // store the result of the query
        }

        // Output the final answer
        cout << "! ";
        for (int i = 0; i < n; i++) {
            if (result[i] == '\0') {
                // If result is not set, make a query to determine the value
                cout << "? " << x << endl;
                cout.flush();

                char response;
                cin >> response;
                result[i] = response;
            }

            cout << (result[i] == '>' ? x + 1 : x) << " ";
        }
        cout << endl;
        cout.flush();
    }

    return 0;
}
