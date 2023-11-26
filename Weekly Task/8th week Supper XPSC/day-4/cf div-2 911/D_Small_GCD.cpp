/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 			3.14159265359
#define dmin 		1e-9
#define dd 			double
#define ll 			long long
#define pq 			priority_queue
#define yes 		cout<<"YES\n"
#define no 			cout<<"NO\n"
#define pb 			push_back
#define vi 			vector<ll>
#define vpi 		vector<pair<int,int>>
#define fori(i, a, b)for(int i = (a); i < (b); ++i)
#define repi(i, a, b)for(int i = (a); i <= (b); ++i)
#define srt 		v.begin(),v.end()
#define all(v) 		v.begin(),v.end()
#define nl 			"\n"
#define fast  		ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{

}

int main()
{
    fast;
    
    
    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front

void enfapapito() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

const ll INF = (1LL << 61);
const ll inf = 1 << 30;

struct tpos {
    ll i, j;
};

bool operator<(const tpos &a, const tpos &b) {
    if (a.i == b.i)
        return a.j < b.j;
    return a.i < b.i;
}

ll freq[1 << 20];
ll pref[1 << 20];
ll arr[1 << 20];

ll f(vector<ll> v) {
    sort(v.begin(), v.end());
    return __gcd(v[0], v[1]);
}

ll fuerza_bruta(ll n) {
    ll ans = 0;
    for (ll i = 0; i < n; i++)
        for (ll j = i + 1; j < n; j++)
            for (ll k = j + 1; k < n; k++)
                ans += f({arr[i], arr[j], arr[k]});
    return ans;
}

void solve() {
    ll n, x, maxi = -inf, y;
    cin >> n;
    vector<ll> numeros;

    // Reading input and initializing arrays
    for (ll i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x;
        maxi = max(maxi, x);
        freq[x]++;
    }

    // Calculating prefix sum
    for (ll i = 1; i <= maxi; i++) {
        pref[i] = pref[i - 1] + freq[i];
        if (freq[i]) {
            numeros.pb(i);
        }
    }

    ll ans = 0, mcd, por;

    // Main logic to calculate the sum
    for (ll m = 0, l = numeros.size(); m < l; m++) {
        x = numeros[m];
        ll xd = freq[x];
        ans += (((xd) * (xd - 1) * (xd - 2)) / 6) * x;
        xd = freq[x];
        por = pref[maxi] - pref[x];
        ll toma = (xd * (xd - 1)) / 2;
        ans += toma * por * x;

        for (ll s = m + 1; s < l; s++) {
            y = numeros[s];
            ll xd = freq[x];
            ll xdd = freq[y];
            ll aux = xd * (freq[y] * (freq[y] - 1)) / 2 * __gcd(x, y);
            ans += aux;

            mcd = __gcd(x, y);
            por = pref[maxi] - pref[y];
            ll suma = mcd * por;
            ll mult = freq[x] * freq[y];
            suma *= mult;
            ans += suma;
        }
    }

    // Clearing arrays for the next test case
    for (ll i = 1; i <= maxi; i++) {
        pref[i] = 0;
        freq[i] = 0;
    }

    // Output the calculated sum for the test case
    cout << ans << '\n';
}

int main() {
    enfapapito();
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
