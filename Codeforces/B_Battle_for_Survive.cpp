#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector <ll> a(n);
        for(auto &i : a) cin >> i;

        ll sum = 0;
        for(ll i = 0; i < n-2; i++) sum += a[i];

        cout << a[n-1] - a[n-2] + sum << endl;
        
    }
}