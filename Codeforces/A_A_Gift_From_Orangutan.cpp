#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        
        int mn = INT_MAX, mx = INT_MIN;
        for(auto it : a){
            mn = min(mn, it);
            mx = max(mx, it);
        }

        cout << (n-1)*(mx-mn) << endl;
    }
    return 0;
}