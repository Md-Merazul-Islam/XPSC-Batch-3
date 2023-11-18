#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> cnt;
    for (int k = 0; k < n; k++) {
        int cur = a[k];
        for (int i = 2; i * i <= cur; i++) {
            while (cur % i == 0) {
                cnt[i]++;
                cur /= i;
            }
        }
        if (cur > 1) {
            cnt[cur]++;
        }
    }
    bool flag = true;
    for (auto it : cnt) {
        if (it.second % n != 0) {
            flag = false;
            break;
        }
    }
    if (flag)
        yes;
    else
        no;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();
    return 0;
}
