#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll countDivisor(ll n){
    ll cnt = 0;
    for(ll i = 1; i*i <= n; i++){
        if(n%i == 0){
            if(i == n/i) cnt++;
            else cnt += 2;
        }
    }
    return cnt;
}
ll GCD(ll a, ll b){
    if(b == 0) return a;
    return GCD(b, a%b);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    
    ll gcd = a[0];
    for(int i = 1; i < n; i++) 
        gcd = GCD(a[i], gcd);

    ll ans = countDivisor(gcd);
    cout << ans << endl;

    return 0;
}