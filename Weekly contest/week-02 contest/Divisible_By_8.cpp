// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll len;
//         ll n;
//         cin >> len >> n;

//         if (n % 8 == 0)
//         {
//             cout << n << endl;
//         }
//         else
//         {
//             for(int i=0; i<100; i++)
//             {

//                 if(n%8==0)
//                 {
//                     cout<<n<<endl;
//                     break;
//                 }
//                 n+=i;

//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define cn(x) cin >> x
// #define foi(i, s, e) for (int i = s; i < e; i++)
// #define endl '\n'
// #define Endl '\n'

// void solve()
// {
//     unsigned long long s, nb, rem, varr;
//     string str, sub, rest, ad, ans;
//     cin >> s >> str;

//     if (s <= 20)
//     {

//         nb = stoi(str);
//         if (nb <= 8)
//             cout << 8 << endl;
//         else
//         {
//             rem = nb % 8;
//             cout << nb - rem << endl;
//         }
//     }
//     else
//     {
//         rest = str.substr(0, s - 3);
//         sub = str.substr(s - 3, s);
//         // cout << rest << Endl << sub << endl;
//         nb = stoi(sub);
//         rem = nb % 8;
//         varr = nb - rem;
//         ad = to_string(varr);
//         ans = rest + ad;
//         cout << ans << endl;
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     // t = 1;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <utility>
// #include <string>
// #include <algorithm>

// using namespace std;

// #define ll long long
// #define add push_back
// #define newline '\n'
// #define vint vector<int>
// #define pii pair<int, int>
// #define ssize(x) static_cast<int>(x.size())
// #define iterate(p) p.begin(), p.end()
// #define accept() cout << "YES" << endl
// #define reject() cout << "NO" << endl
// #define loop(i, l, r) for (int i = l; i < r; i++)
// #define vvint vector<vector<int>>
// #define MAX_LL LLONG_MAX
// #define first_element ff
// #define second_element ss
// #define print_values(a) for (auto x : a) cout << x << " "; cout << endl
// #define pop_back_elem pop_back
// #define floating double

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int num_cases;
//     cin >> num_cases;
    
//     while (num_cases--) {
//         int length;
//         cin >> length;
//         string sequence;
//         cin >> sequence;

//         int num_value;
//         string subsequence;

//         if (length == 1) {
//             cout << 8 << endl;
//         } else {
//             if (length >= 3) {
//                 subsequence = sequence.substr(length - 3, 3);
//             } else {
//                 subsequence = sequence;
//             }

//             if (length >= 3) {
//                 num_value = stoll(subsequence);
//             } else {
//                 num_value = stoll(sequence);
//             }

//             if (num_value % 8 == 0) {
//                 cout << sequence << endl;
//             } else {
//                 int remainder = num_value % 8;

//                 if (num_value % 10 >= remainder) {
//                     num_value -= remainder;
//                 } else {
//                     num_value += 8 - remainder;
//                 }

//                 string result = "";

//                 if (length >= 3) {
//                     result += sequence.substr(0, length - 3);
//                 }

//                 string temp = to_string(num_value);
//                 reverse(iterate(temp));

//                 while (temp.size() != subsequence.size()) {
//                     temp += '0';
//                 }
                
//                 reverse(iterate(temp));
//                 result += temp;
//                 cout << result << endl;
//             }
//         }
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define int long long
#define all(p) p.begin(), p.end()
#define float double
#define double long double
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main(){
    fastio();
   
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans;
        string temp1;
        if (n == 1) cout << 8 << endl;
        else{
            if (n >= 3) temp1 = s.substr(n-3, 3);
            else temp1 = s;
            if (n>=3) ans = stoll(temp1);
            else ans = stoll(s);
            if (ans % 8 == 0) cout << s << endl;
            else{
                int rem = ans % 8;
                if (ans % 10 >= rem) ans -= rem;
                else ans += 8-rem;
                string str = "";
                if (n>=3)
                    str += s.substr(0, n-3);
                string temp = to_string(ans);
                reverse(all(temp));
                while (temp.size() != temp1.size()){
                    temp += '0';
                }
                reverse(all(temp));
                str += temp;
                cout << str << endl;
            }
        }
    }

    return 0;
}