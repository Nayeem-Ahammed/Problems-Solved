#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for(auto &i : a) cin >> i;

        bool f= true;
        for(int i = 0; i < n-1; i++){
            int d = abs(a[i]-a[i+1]);
            if(d != 5 and d != 7){
                f = false;
                break;
            }
        }
        
        f ? cout <<"YES\n" : cout <<"NO\n";
    }
    return 0;
}