#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        int64_t m; cin >> m;

        int bit = 32 - __builtin_clz(x), cnt = 0;
        int l = (1 << (bit-1)), r = (1 << bit)-1;

        for(int i = l; i <= r and i <= m; i++) {
            int div = (x ^ i);
            if(div and (x % div == 0 or i % div == 0)) cnt++;
        }

        cout << cnt << '\n';

    }
    return 0;
}