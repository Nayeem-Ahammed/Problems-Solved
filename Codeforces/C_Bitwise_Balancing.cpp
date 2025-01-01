#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll b,c,d; cin >> b >> c >> d;
        bitset<32> x(b),y(d);
        int k = 0;
        bool f = true;
        
        for(int i = 0; i < 32; i++){
            if(y[i] == 0){
                if(x[i]) k += (1 << i);
            }
            else {
                if(x[i] == 0) x[i] = 1;
            }
        }
        if(x.to_ulong() - y.to_ulong()&c == k) {
            cout << x.to_ulong() << endl;
        } else cout << -1 << endl;
     
    }
    return 0;
}