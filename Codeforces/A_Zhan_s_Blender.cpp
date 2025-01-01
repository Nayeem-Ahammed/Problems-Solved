#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll x, y; cin >> x >> y;

        cout << (ll)ceil(1.0 * n / min(x, y)) << endl;
        
    }
}