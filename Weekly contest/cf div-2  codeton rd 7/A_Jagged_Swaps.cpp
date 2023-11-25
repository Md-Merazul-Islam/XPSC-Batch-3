// /**************بسم الله الرحمن الرحيم*************
// ***********************❀‿❀************************/

// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define pq priority_queue
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define in insert
// #define vpi vector<pair<int, int>>
// #define fori for (int i = 0; i < n; i++)
// #define srt v.begin(), v.end()
// #define all(v) v.begin(), v.end()
// #define nl "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

// void mdmerazulislam()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     bool isUnique = true;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (i > 0 && a[i] == a[i - 1])
//         {
//             isUnique = false;
//         }
//     }

//     if (a[0] != 1 || !isUnique)
//     {
//         cout << "NO\n";
//         return;
//     }

//     sort(a.begin(), a.end());

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != i + 1)
//         {
//             cout << "NO\n";
//             return;
//         }
//     }

//     cout << "YES\n";
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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int elements[size];
        bool allUnique = true;
        for (int i = 0; i < size; i++)
        {
            cin >> elements[i];
            if (i > 0 && elements[i] == elements[i - 1])
            {
                allUnique = false;
            }
        }
        if ((elements[0] != 1) || !allUnique)
        {
            cout << "NO" << endl;
            continue;;
        }
        sort(elements, elements + size);
        for (int i = 0; i < size; i++)
        {
            if (elements[i] != i + 1)
            {
                cout << "NO" << endl;
                continue;;
            }
        }

        cout << "YES" << endl;
    }

    return 0;
}