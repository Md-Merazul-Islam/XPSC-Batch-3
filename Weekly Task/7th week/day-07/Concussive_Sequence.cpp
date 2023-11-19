/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int, int>>
#define fori for (int i = 0; i < n; i++)
#define srt v.begin(), v.end()
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

bool chek(vector<int> &v)
{ for(int i = 1; i < v.size() - 1; i++){
		if(v[i] > v[i + 1] and v[i] > v[i - 1]) continue;
		if(v[i] < v[i + 1] and v[i] < v[i - 1]) continue;
		return false;
	}
	return true;
}

void mdmerazulislam()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    vector<int> b(n), c(n);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt >= n)
        {
            cnt = 1;
        }
        b[cnt] = a[i];
        cnt += 2;
    }
    cnt = 1;

    for (int i = 0; i < n; i++)
    {
        if (cnt >= n)
            cnt = 0;
        c[cnt] = a[i];
        cnt += 2;
    }

    vector<int> ans = {-1};
    if (chek(b)){
        ans =b;
    }
    else if(chek(c)){
        ans=c;
    }
    for(auto val : ans)
    {
        cout<<val <<" ";
    }
    cout<<nl;

}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        mdmerazulislam();
    }

    return 0;
}