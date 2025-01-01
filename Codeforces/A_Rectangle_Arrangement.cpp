#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        int a= 0, b = 0;
        for(int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            a = max(a, x);
            b = max(b, y);
        }
    

        cout << 2*(a+b) <<endl;
    }
    return 0;
}