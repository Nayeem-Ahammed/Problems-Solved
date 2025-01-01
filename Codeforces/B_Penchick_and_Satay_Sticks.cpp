#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n), p(n+1, 0);
        for(auto &i : a) cin >> i;
        
        bool ok = true;
        for(int i = 1; i <= n and ok; i++){
            if(abs(a[i-1] - i) > 1) ok = false;
        }
        
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}