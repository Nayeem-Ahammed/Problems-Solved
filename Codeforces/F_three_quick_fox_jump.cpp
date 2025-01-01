#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll a, b, c; cin >> a >> b >> c;
        ll s = (a+b+c);
        ll dis = (s* (s-2*a) * (s-2*b) * (s-2*c));
        ll area = 4*s*s;

        ll g = gcd(dis, area);
        cout << dis/g <<"/" <<area/g << '\n';
        
    }
    return 0;
}