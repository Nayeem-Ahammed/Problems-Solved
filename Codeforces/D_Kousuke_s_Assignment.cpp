#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1, ans; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n), pre(n);
        for(auto &i : a) cin >> i;

        set<ll> f;
        f.insert(0);
        ll sum = 0;
        ans = 0;

        for(int i = 0; i < n; ++i){
            sum += a[i];
            if(f.count(sum)) {
                ans++;
                f.clear();
                f.insert(0);
                sum = 0;
            }
            f.insert(sum);
        }

        cout << ans << endl;
        
    }
    return 0;
}