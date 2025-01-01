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

        ll sum = accumulate(a.begin(), a.end(), 0LL);
        ll mx = *max_element(a.begin(), a.end());

        for(int i = n; i > 0; i--) {
            ll deck = (sum + k) / i;
            ll tot = deck * i;

            if(deck >= mx and tot >= sum) {
                cout << i <<endl; break;
            }
        }
    }
    return 0;
}