#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcm(int a, int b){
    return 1LL*a*b/ __gcd(a, b);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n; cin >> n;

    for(ll i = sqrt(n); i >= 1; i--){
        if(n%i == 0){
            ll g = __gcd(i, n/i);
            if(g == 1){
                cout << i << ' ' << n/i;
                break;
            }
        }
    }

    return 0;
}
