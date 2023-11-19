/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

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

void mdmerazulislam() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B')
            b++;
    }

    if (b == k) {
        cout << 0 << endl;
    } else {
        if (b < k) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') {
                    cnt++;
                }
                if (cnt == k - b) {
                    cout << 1 << endl << i + 1 << " " << 'B' << endl;
                    break;
                }
            }
        } else {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'B') {
                    cnt++;
                }
                if (cnt == b - k) {
                    cout << 1 << endl << i + 1 << " " << 'A' << endl;
                    break;
                }
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        mdmerazulislam();
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int Bcnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B') Bcnt++;
        }

        if (Bcnt == k)
            cout << 0 << endl;

        else
        {
            if (Bcnt > k)
            {
                int cntB = 0;
                for (int i = 0; i < n; i++)
                {
                    if (str[i] == 'B')
                    {
                        cntB++;
                        if (cntB == Bcnt - k)
                        {
                            cout << 1 << endl
                                 << i + 1 << " " << 'A' << endl;
                            break;
                        }
                    }
                }


                
            }
            else
            {
                int cntA = 0;
                for (int i = 0; i < n; i++)
                {
                    if (str[i] == 'A')
                    {
                        cntA++;
                        if (cntA == k - Bcnt)
                        {
                            cout << 1 << endl
                                 << i + 1 << " " << 'B' << endl;
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
