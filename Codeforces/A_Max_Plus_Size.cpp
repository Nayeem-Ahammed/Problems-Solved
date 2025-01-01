/***************************************************************************
*    In the name of Allah, the Most Compassionate, the Most Merciful       *
***************************************************************************/
#include <bits/stdc++.h>
#define fr(i,n)     for(ll i=0; i<n; ++i)
#define vin(v)      for(auto &i : v) cin >> i
#define vout(v)     for(auto &i : v) cout << i << ' '
#define all(v)      v.begin(), v.end()
#define yes         cout << "YES" << nl
#define no          cout << "NO" << nl
#define nl          '\n'
#define fast        ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
typedef long long ll;
const int mod  = 1e9+7;

void solve(){
    int n; cin >> n;
    vector <int> a(n); vin(a);
    int mx = INT_MIN;

    int cnt = 0;
    for(int i = 0; i < n; i+=2) {
        mx = max(mx, a[i]); cnt++;
    }
    int ans1 = mx + cnt;
    cnt = 0; mx = INT_MIN;
    for(int i = 1; i < n; i+=2) {
        mx = max(mx, a[i]); cnt++;
    }
    int ans2 = mx + cnt;
    cout << max(ans1, ans2) << nl;
}

int32_t main()
{
    fast
    ll tc = 1;  cin >> tc;
    while(tc--) solve();

    #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
    #endif

    return 0;
} 