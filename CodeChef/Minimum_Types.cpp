#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        std::vector<int> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        
        vector < pair<int, int>> vp;
        for(int i = 0; i < n; i++) {
            vp.emplace_back(a[i], b[i]);
        }
        
        sort(vp.begin(), vp.end(), [](pair<int, int>& p1, pair<int, int>& p2) {
            return p1.first > p2.first; 
        });
        
        int ans = 0;
        for(auto it : vp) {
            // cout << it.first <<' ' << it.second <<'\n';
            int x = it.first, y = it.second;
            if(k <= 0) break;
            if(k >= x) {
                int z = min(y, k/x);

                k -= x*z;
                ans++;
            }
        }
        
        if(k > 0) cout << -1 <<'\n';
        else cout << ans <<'\n';
    }

}