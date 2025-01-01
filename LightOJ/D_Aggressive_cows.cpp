#include <bits/stdc++.h>
using namespace std;

// int Largest_Min_Dis(vector <int>& a, int n, int k, int dis, int pos){
//     if(k == 0) return dis;
//     // take
//     int take = Largest_Min_Dis(a, n, k, dis, a[i]);
// }
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector <int> a(n);
        int l = 1, h = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            h = max(h, a[i]);
        }
        sort(a.begin(), a.end());

        auto cow = [&](const int m) {
            int cow = 1, cur = a[0];
            for(int i = 1; i < n; i++){
                if(a[i] - cur >= m) {
                    cur = a[i];
                    cow++;
                }
                if(cow >= k) return true;
            }
            return cow >= k;
        };
        while (l <= h) {
            int mid = l + (h-l)/2;
            if(cow(mid)) {
                ans = mid;
                l = mid + 1;
            } else h = mid - 1;
        }

        cout << ans << '\n';
    }
    
    
    return 0;
}