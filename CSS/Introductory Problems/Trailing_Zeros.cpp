#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    // find the Trailing Zeros for n! .
    // minimum 5! = 120, that has 1 zero from the end.

    int ans = 0, base = 5;

    
    // while (base <= n) {
    //     ans += n/base;
    //     base *= 5;
    // }

    while (n) {
        ans += (n/5);
        n /= 5;
    }
    cout << ans << endl;

}