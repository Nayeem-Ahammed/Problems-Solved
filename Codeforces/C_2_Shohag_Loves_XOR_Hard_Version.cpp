#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    // int n, k; cin >> n >> k;

    // for(int i = 1; i <= n; i++){
    //     cout << k <<" ^ " << i <<" = " << (k^i) <<'\n';
    // }

    int t; cin >> t; while (t--) {
        int64_t x, m; cin >> x >> m;
        if(x == 1) {
            cout << m <<'\n';
            continue;
        }
        int ans = 0;

        for(int i = 1; i <= x/2; i++){
            if((x ^ i) % i == 0 and (x^i)) ans++;
            // cout << (x^i) <<" \n"[i == x/2];
        }

        // cout << ans <<'\n';
        int64_t p = x;
        while (1) {
            int b = (p ^ x);
            if(b > m) break;
            if(b <= m) ans++;
            p += x;
            
        }

        cout << ans << '\n';
    }
    return 0;
}