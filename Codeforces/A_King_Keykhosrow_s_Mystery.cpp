#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
       int a, b;
       cin >> a >> b;
       cout << (a*b)/__gcd(a, b) <<'\n';        
    }
    return 0;
}