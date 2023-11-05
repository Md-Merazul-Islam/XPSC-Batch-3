/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/
#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

dd getDis(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

bool isInside(int ax, int ay, int px, int py, dd r) {
    dd d = getDis(ax, ay, px, py);
    return (d <= r);
}

void mdmerazulislam() {
    int px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;

    dd l = 0.0, r = 1e18, ans;

    while ((r - l) > 1e-9) {
        dd rds = l + (r - l) / 2;
        
        if (isInside(ax, ay, 0, 0, rds) && isInside(ax, ay, px, py, rds)) {
            ans = rds;
            r = rds;
        } else if (isInside(bx, by, 0, 0, rds) && isInside(bx, by, px, py, rds)) {
            ans = rds;
            r = rds;
        } else if (isInside(ax, ay, 0, 0, rds) && isInside(bx, by, px, py, rds) &&
                   ((2 * rds) - getDis(ax, ay, bx, by)) > 1e-9) {
            ans = rds;
            r = rds;
        } else if (isInside(bx, by, 0, 0, rds) && isInside(ax, ay, px, py, rds) &&
                   ((2 * rds) - getDis(ax, ay, bx, by)) > 1e-9) {
            ans = rds;
            r = rds;
        } else {
            l = rds;
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
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
