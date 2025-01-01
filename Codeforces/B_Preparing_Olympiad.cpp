#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, l, r, x, cnt = 0;
    cin >> n >> l >> r >> x;
    int a[15];
    for(auto &i : a) cin >> i;

    for(int musk = 1; musk < (1 << n); musk++) {
        int sum = 0;
        int mn = INT_MAX, mx = INT_MIN;
        
        for(int i = 0; i < 16; i++){
            if(musk & (1 << i)) {
                sum += a[i];
                mn = min(mn, a[i]);
                mx = max(mx, a[i]);
            }
        }
        
        if(sum >= l and sum <= r and mx - mn >= x) cnt++;
    }
    

    cout << cnt << endl;
    return 0;
}