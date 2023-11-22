/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int,int>>
#define fori for(int i=0;i<n;i++)
#define srt v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define nl "\n"
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);

bool isSorted(vector<int> &arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

void mdmerazulislam() {
    int n;
    cin >> n;
    vector<int> a(n), a1(n), b(n), b1(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> b1[i];

    if (isSorted(a)) {
        yes;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            for (int j = 0; j < n; j++) {
                if (b1[j] == a1[i] && b[j] <= a[i + 1]) {
                    swap(b[j], a[i]);
                    break;
                }
            }
            if (a[i] > a[i + 1]) {
                for (int j = 0; j < n; j++) {
                    if (b1[j] == a1[i + 1] && b[j] > a[i]) {
                        swap(b[j], a[i + 1]);
                        break;
                    }
                }
            }
        }
    }

    if (isSorted(a)) {
        yes;
    } else {
        no;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        mdmerazulislam();
    }

    return 0;
}
