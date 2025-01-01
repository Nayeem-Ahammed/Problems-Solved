#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector <int> a(n);
    for(auto &i : a) cin >> i;

    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        if(a[i] == a[i+1]) {
            unordered_map<int, pair<int, int>> mp;
            int len = 0;
            bool ok = true;
            for(int k = i; k < n-1 and ok; k += 2){
                if(a[k] != a[k+1]) {
                    ok = false;
                    i = k;
                    break;
                    
                }
                             
                if(mp[a[k]].first >= 2) {
                    ok = false;
                    i = mp[a[k]].second;
                    break;
                }
                mp[a[k]].first += 2;
                mp[a[k]].second = k;
                len += 2;
            }
            ans = max(ans, len);
        }
    }
    cout << ans << '\n';
    return 0;
}