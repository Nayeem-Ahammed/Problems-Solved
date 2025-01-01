#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        int n;
        int64_t m;
        cin >> n >> m;
        vector <int> a(n), c(n);
        for(auto &i : a) cin >> i;
        for(auto &i : c) cin >> i;

        vector <pair<int, int>> vp;
        for(int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            vp.emplace_back(a, b);
        }
        
        sort(vp.begin(), vp.end());

        int64_t i = 0, j = 0, mx = 0, cur = 0;
        while(j < n){
            int z = m/vp[j].first;
            z = min (z, vp[j].second);
            cur += (vp[j].first * z);
            vp[j].second = z;

            while(i <= j and (cur > m or vp[j].first - vp[i].first > 1)) {
                if(vp[j].first - vp[i].first > 1) {
                    cur -= vp[i].first * vp[i].second;
                    
                }else{
                    cur -= vp[i].first;
                    vp[i].second -= 1;
                }
                i++;
            }
            mx = max(mx, cur);
            j++;
        }

        cout << mx << '\n';
        
    }
    return 0;
}