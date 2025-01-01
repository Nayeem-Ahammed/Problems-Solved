#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<int> f(n+1, 0);
        int g = n-2, p = -1;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            f[x]++;
            if(g % x == 0 and f[g/x] >= 1 and p == -1){
                if(g/x == x){
                    if(f[x] >= 2) p = x;
                } 
                else p = x;
            }
        }
        
        
        cout << p <<' ' << g/p <<'\n';
    }
    return 0;
}