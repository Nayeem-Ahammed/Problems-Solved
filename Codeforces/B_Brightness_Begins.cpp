#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool f(ll m, int n){
    return m - (ll)sqrt(m) >= n;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        ll l = n, r = 1e18, ans = n;
        while(l <= r) {
            auto mid = (l + r) >> 1;
            if(f(mid, n)) {
                ans = mid;
                r = mid - 1;
            } else l = mid + 1;
        }
        
        cout << ans << endl;
        
    }
    return 0;
}