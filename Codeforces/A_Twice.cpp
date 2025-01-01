#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<int> f(n+1, 0);

        int cnt = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            f[x]++;            
        }
        
        for (int i = 1; i <= n; i++){
            cnt += f[i]/2;
        }
        cout << cnt << '\n';

    }
    return 0;
}