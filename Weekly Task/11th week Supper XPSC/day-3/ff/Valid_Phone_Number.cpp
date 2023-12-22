// #include <iostream>
// #include <string>
// using namespace std;

// bool isValid(const string &s) {
//     if (s.size() != 14 || s.substr(0, 4) != "+880")
//         return false;

//     string providerCodes[] = {"12", "13", "14", "15", "16", "17", "18", "19"};
//     string sim = s.substr(4, 2);

//     for (const string &code : providerCodes) {
//         if (sim == code)
//             return true;
//     }

//     return false;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         if (isValid(s))
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
bool isValid(const string &s)
{
    if (s.size() != 14 || s.substr(0, 5) != "+8801")
        return false;
    for (int i = 5; i < 14; ++i)
    {
        if (!isdigit(s[i]))
            return false;
    }
    string providerCodes = "23456789";
    char c = s[5];

    for (char code : providerCodes)
    {
        if (c == code)
            return true;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isValid(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
