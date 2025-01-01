#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        if(k == 1 or n < k) {
            cout << n << endl;
            continue;
        }

        int cnt = 0;
        while(n){
            cnt += n % k;
            n /= k;
        }

        cout << cnt << endl;
    }
    return 0;
}