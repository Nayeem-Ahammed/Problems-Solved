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
        ll tot = 0, cur = 0, ans = 0;
        sort(a.begin(), a.end());
        
        for(int i = 0; i < n; i++){
            tot += (a[i] - cur)*(n-i);
            // cout << tot << ' ' << cur << endl;
            if(tot >= k){
                cout << k+i << endl;
                break;
            }

            cur += (a[i] - cur);
        }
    }
    return 0;
}