#include <bits/stdc++.h>
using namespace std;
const int mx = 1e9;

int nCr(int n, int r) {

}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }

        int64_t ans = 1LL*mp[1]*mp[2];
        for(auto it : mp) {
            int p = it.second;
            ans += (1LL*p*(p-1)/2);
        }
        
        cout << ans << '\n';
    }
    return 0;
} 