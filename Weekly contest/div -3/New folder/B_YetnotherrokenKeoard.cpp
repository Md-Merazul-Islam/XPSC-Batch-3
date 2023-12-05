

// #include <iostream>
// #include <stack>
// using namespace std;

// void mdmerazulislam() {
//     string s;
//     cin >> s;
//     stack<char> st;

//     for (char c : s) {
//         if (islower(c)) {
//             if (!st.empty() && st.top() == c) {
//                 st.pop();
//             } else {
//                 st.push(c);
//             }
//         } else if (isupper(c)) {
//             if (!st.empty() && st.top() == c) {
//                 st.pop();
//             } else {
//                 st.push(c);
//             }
//         }
//     }

//     string result;
//     while (!st.empty()) {
//         result = st.top() + result;
//         st.pop();
//     }

//     cout << result << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         mdmerazulislam();
//     }

//     return 0;
// // }

// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<int, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
// void mdmerazulislam() {
//     string s;
//     cin >> s;
//     stack<char> st;

//     for (char c : s) {
//         if (c == 'B') {
//             if (!st.empty() && isupper(st.top())) {
//                 st.pop();
//             }
//         } else if (c == 'b') {
//             if (!st.empty() && islower(st.top())) {
//                 st.pop();
//             }
//         } else {
//             st.push(c);
//         }
//     }

//     string ans;
//     while (!st.empty()) {
//         ans = st.top() + ans;
//         st.pop();
//     }

//     cout << ans << endl;
// }

// int main()
// {
//     fast;

//     int t;
//     cin >> t;
//     while (t--)
//         mdmerazulislam();

//     return 0;
// }

/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 			3.14159265359
#define dmin 		1e-9
#define dd 			double
#define ll 			long long
#define yes 		cout<<"YES\n"
#define no 			cout<<"NO\n"
#define pb 			push_back
#define vi 			vector<ll>
#define vpi 		vector<pair<int,int>>
#define srt(a) 		sort(a.begin(),a.end())
#define rsrt(a) 		sort(a.rbegin(),a.rend())
#define nl 			"\n"
#define fast  		ios_base::sync_with_stdio(false),cin.tie(NULL);
#define loop(i, a, b)for(int i = (a); i < (b); ++i)
#define rloop(i, a, b)for(int i = (a); i <= (b); ++i)


void mdmerazulislam() {
    string s;
    cin >> s;
    string ans = "";
    int b = 0, B = 0;

    for (int i = s.size(); i >=0; i--) {
        char c = s[i];
        if (c == 'B') B++;
        else if (c == 'b') b++;
        else if (c >= 'A' && c <= 'Z') {
            if (B) B--;
            else ans += c;
        }
        else if (c >= 'a' && c <= 'z') {
            if (b) b--;
            else ans += c;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main()
{
    fast;
    
    int t;cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}