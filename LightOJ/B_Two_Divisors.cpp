#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int ans = (1LL*a*b)/__gcd(a, b);
        if(ans == b) ans *= (b/a);
        cout << ans << endl;
    }
    return 0;
}