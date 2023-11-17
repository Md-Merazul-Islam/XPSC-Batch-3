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


void mdmerazulislam()
{

}

int main()
{
    fast;
    
    	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << n / 2 << endl;
		for (int i = 0; i < n / 2; i++) {
			cout << 2 << " ";
		}
		cout << endl;
	}
	else {
		cout << (n / 2) << endl;
		for (int i = 0; i < (n / 2)-1; i++) {
			cout << 2 << " ";
		}
		cout <<3<< endl;
	}
    
    return 0;
}