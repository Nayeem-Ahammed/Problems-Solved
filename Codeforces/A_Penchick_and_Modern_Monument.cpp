#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        
        int mx = INT_MIN;
        for(int i = 1; i <= n; i++) mx = max(mx, mp[i]);

        cout << n - mx <<'\n';
    }
    return 0;
}