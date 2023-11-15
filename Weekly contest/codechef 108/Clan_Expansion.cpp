#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int,int>>
#define fori for(int i=0;i<n;i++)
#define srt v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define nl "\n"
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);



void minConquestTime() {
    int N;
    cin >> N;
    vector<int> territories(N);
    unordered_map<int, int> lastSeen;
    int minTime = INT_MAX;
    int conqueror = -1;

    for (int i = 0; i < N; ++i) {
        cin >> territories[i];
        territories[i]--;

        if (lastSeen.find(territories[i]) != lastSeen.end()) {
            int time = i - lastSeen[territories[i]];
            time = time / 2 + time % 2;
            minTime = min(minTime, time);
        } else {
            minTime = min(minTime, i + 1);
        }

        lastSeen[territories[i]] = i;
    }

    for (auto &entry : lastSeen) {
        if (entry.second == N - 1 || entry.second == 0) {
            conqueror = entry.first + 1;
            minTime = N - 1; // If only one occurrence, minimum time is n - 1
            break;
        }
    }

    cout << conqueror << " " << minTime << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        minConquestTime();
    }

    return 0;
}
