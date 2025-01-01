#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int l, r; cin >> l >> r;
        bool fg = false;
        if(l*2 <= r) fg = true;

        fg ? cout << l << ' ' << 2*l : cout << -1 << ' ' << -1;
        cout << endl;
    }
    return 0;
}