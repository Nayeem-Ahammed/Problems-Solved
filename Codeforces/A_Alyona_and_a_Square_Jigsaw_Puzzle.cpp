#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSquare(int n) {
    int x = sqrt(n);
    return (x&1 and x*x == n);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        
        int cnt = 0;
        int sum = 0;
        for(auto it : a) {
            sum += it;
            // cout << sum << ' ';
            if(isSquare(sum)) cnt++;
        }

        cout << cnt <<'\n';
    }
    return 0;
}