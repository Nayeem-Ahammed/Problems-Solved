#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());
        int ans = n;

        for(int j = 2, i = 0; j < n; j++){
            while(i+1 < j and a[i]+a[i+1] <= a[j]) 
                i++;
            ans = min(ans, n-(j-i+1));
        }
        
        // int ans = n;
        // for(int i = 0; i < n; i++){
        //     int d = lower_bound(a.begin(), a.end(), a[i]+a[i+1]) - a.begin();
        //     // cout << d << ' ';
        //     ans = min(ans, n-(d-i));
        // }
        cout << ans << '\n';
    }
    return 0;
}