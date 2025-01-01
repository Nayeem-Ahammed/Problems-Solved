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
        
        sort(a.rbegin(), a.rend());

        for(int i = 0; i < n and k and a[i] <= k; i++){
            k -= a[i];
        }
        
        cout << k <<'\n';
    }
    return 0;
}