#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool possible (vector <int> a, int mid) {
    int n = a.size(), i = 0;
    for( ; i < n-2; i++) {
        int r = a[i] - mid;

        a[i] -= r;
        a[i+2] += r;
        if(a[i] != mid or a[i] < 0) return false;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] != mid or a[i] < 0) return false;
    }

    return true;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector<int> a(n);
        
        int x = 0, y = 1e9+7;
        ll sum = 0, even = 0, odd = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(i & 1) even += a[i];
            else odd += a[i];
        }
        
        int e = n/2;
        int o = n - e;

        if(even % e == 0 and odd % o == 0 and even/e == odd/o) {
            cout << "YES\n";
        }else cout <<"NO\n";

        // bool ok = possible(a, sum/n);
        
        // ok ? cout <<"YES\n" : cout <<"NO\n";
    }
    return 0;
}