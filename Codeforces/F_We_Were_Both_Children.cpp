#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        map<ll, ll> mp;
        ll frq[n+1] = {0};
        
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }

        ll ans = 0;
        for(auto it : mp){
            ll a = it.first, b = it.second;
            for(ll j = a; j <= n; j += a)
                frq[j] += b, ans = max(ans, frq[j]);
        }
        
        cout << ans <<endl;
    }
    return 0;
}