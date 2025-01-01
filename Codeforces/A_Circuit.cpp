#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(2*n);
        for(auto &i : a) cin >> i;
        
        int cnt = 0;
        for(auto it : a) cnt += it;
        // cout << cnt << endl;
        (cnt & 1) ? cout << 1 : cout << 0;
        cout << ' ' << min(cnt, 2*n - cnt) << '\n';       
    }
    return 0;
}