#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n, k; cin >> n >> k;
        vector<ll> a(n);
        for(auto &i : a) cin >> i;
        
        bool f = false;
        for(int i = 0; i< n and !f; i++) {
            bool done = false;
            for(int j = 0; j < n and !done; j++) {
                if(i != j) {
                    if(abs(a[i] - a[j])%k == 0) {
                        done = true;
                    }
                }
                
            }
            if(!done) {
                cout << "YES\n" << i+1 <<'\n';
                f = true;
            }
        }
        
        if(!f) cout <<"NO\n";
    }
    return 0;
}