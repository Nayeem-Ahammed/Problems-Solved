#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while(t--){
        ll a, b; cin >> a >> b;
        ll hcf = __gcd(a, b);
        ll lcm = 1LL * a * b / hcf;

        cout << lcm << ' ' << hcf << endl;
    }
    return 0;
}