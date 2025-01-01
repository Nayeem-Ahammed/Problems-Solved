#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; // cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if(c%a == 0 or c%b == 0){
            cout << "Yes\n"; return 0;
        }
        if(a > b) swap(a, b);
        int r = c/a;

        for(int i = 1; i <= r; i++){
            if((c-a*i) % b == 0) {
                cout << "Yes\n";
                return 0;
            }
        }
        
        cout << "No\n";
    }
    return 0;
}