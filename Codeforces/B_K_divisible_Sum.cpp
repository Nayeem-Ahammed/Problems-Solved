#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n, k ; cin >> n >> k;
        
        if (n > k) k *= (n + k -1) / k;
        cout << (n+k-1)/ n << endl;
        
    }
    return 0;
}