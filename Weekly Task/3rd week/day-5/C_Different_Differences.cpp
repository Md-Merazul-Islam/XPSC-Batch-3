#include <iostream>
using namespace std;
const int MAXX = 40 + 7;
int a[MAXX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    
    while (t--) {
        int k, n;
        cin >> k >> n;
        a[1] = 1;
        
        for (int i = 2; i <= k; ++i) {
            if (n - a[i - 1] >= k - 1) {
                a[i] = a[i - 1] + i - 1;
            } else {
                a[i] = a[i - 1] + 1;
            }
        }
        
        for (int i = 1; i <= k; ++i) {
            cout << a[i] << ' ';
        }
        
        cout << "\n";
    }
    
    return 0;
}
