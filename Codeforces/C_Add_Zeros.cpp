#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxL (vector <ll> &a, ll n) {
    ll mx = 0;
    for(ll i = 1; i < n; i++){
        if(a[i] == n-i){
            mx = n + maxL(a, n+i);
        }
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for(auto &i : a) cin >> i;

        
        
    }
    return 0;
}