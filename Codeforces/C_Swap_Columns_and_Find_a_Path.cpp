#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        
        vector <pair< int, int>> vp;
        for(int i = 0; i < n; i++) {
            vp.emplace_back(a[i] , b[i]);
        }

        auto cmp = [&](pair<int, int> &x, pair<int, int> &y) {
            if(x.first != y.first) return x.first > y.first;
            return  x.second < y.second;
        };
        sort(vp.begin(), vp.end(), cmp);
        
        for(auto it : vp) cout << it.first <<' ' << it.second <<'\n';
        cout << '\n';

        ll ans = vp[0].first + vp[n-1].second;
        int i = 1;
        while (i < n and vp[i].first >= vp[i].second) {
            ans += vp[i].first; 
            i++;
        }
        if(i != n) i--;

        for( ; i < n-1; i++) {
            ans += vp[i].second;
        }


        cout << ans <<'\n';

    }
    return 0;
}