#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;
        if(a >= b) cout << a << endl;
        else{
            int val = 2*a - b;
            if(val < 0) val = 0;
            cout << val <<endl;
        }     
        
    }
    return 0;
}