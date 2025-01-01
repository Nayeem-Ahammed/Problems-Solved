#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        
        int k = 1, ans = 1;
        while (k < n) {
            k = 2*(k+1);
            ans++;
        }
        
        cout << ans <<'\n';
    }
    return 0;
}