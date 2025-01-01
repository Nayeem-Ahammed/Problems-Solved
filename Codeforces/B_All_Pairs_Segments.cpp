#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n, q; cin >> n >> q;
        vector<ll> a(n);
        for(auto &i : a) cin >> i;
        
        map<ll, ll> seg;
        for(ll i = 0; i < n; i++) {
            ll segment = (i+1)*(n-i)-1;
            seg[segment]++;

            if (i > 0) {
                seg[i*(n-i)] += (a[i]-a[i-1]-1);
            }
        }

        while(q--) {
            ll k; cin >> k;
            if(seg.find(k) == seg.end()) cout <<0 << ' ';
            else cout << seg[k] <<' ';
        }  
        cout << endl;

    }
    return 0;
}