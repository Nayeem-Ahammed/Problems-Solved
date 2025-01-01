#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        string s; cin >> s;
        int q; cin >> q;
        
        int n = s.size();
        set<int> pos;
        for(int i = 0; i <= n-4; i++) {
            if(s.substr(i, 4) == "1100") 
                pos.insert(i);
        }

        while(q--){
            int i; cin >> i; i--;
            char c; cin >> c;

            if(s[i] != c) {
                for(int j = max(0, i-3); j <= min(i, n-4); j++){
                    if(s.substr(j, 4) == "1100")
                        pos.erase(j);
                }

                s[i] = c;

                for(int j = max(0, i-3); j <= min(i, n-4); j++){
                    if(s.substr(j, 4) == "1100")   
                        pos.insert(j);
                }
            }

            cout << ((pos.empty()) ? "NO\n" : "YES\n");
        }
        
        
    }
    return 0;
}