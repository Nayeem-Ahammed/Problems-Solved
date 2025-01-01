#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        
        long long l = max (0, n-m), r = n+m;
        long long  ans = 0;

        bool ok = false;
        for(int i = 32; i >= 0; i--){
            if (ok) ans |= (1LL << i);
            else {
                if (l & (1LL << i) or (r & (1LL << i))) {
                    ans |= (1 << i);
                }
                if (l >> i != r >> i) ok = true; 
            }
        }
        cout << ans  << endl;
    
 
    }
}