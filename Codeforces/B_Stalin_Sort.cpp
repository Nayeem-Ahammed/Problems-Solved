#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        
        set<pair<int, int>> vp;
        for(int i = 0; i < n; i++){
            vp.insert({a[i], i});
        }

        auto it = vp.begin();
        int mn = it->second;

        int ans = 0, i = 0;
        for(auto it : vp){
            ans = min(ans, n - it.second + 1-i);
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}