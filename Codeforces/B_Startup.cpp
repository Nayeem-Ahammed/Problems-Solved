#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    int sz;
    while (t--) {
        int n, k; cin >> n >> k;
        vector <int> a(k+1, 0);
        sz = k;
        while(k--){
            int x,y; cin >>x >>y;
            a[x] += y; 
        }
        sort(a.rbegin(), a.rend());
        ll ans = 0;
        for(int i = 0; i < n and i <= sz; i++){
            ans += a[i];
        }
        cout << ans << endl;
        
    }
    return 0;
}