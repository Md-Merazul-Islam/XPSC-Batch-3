/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

bool isDivisibleBy3(const string &number)
{
    int remainder = 0;

    for (char digit : number)
    {
        remainder = (remainder * 10 + (digit - '0')) % 3;
    }

    return remainder == 0;
}

int main()
{
    int k;
    cin >> k;

    for (int i = 0; i < k; ++i)
    {
        string test_number;
        cin >> test_number;
        bool result = isDivisibleBy3(test_number);
        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}
