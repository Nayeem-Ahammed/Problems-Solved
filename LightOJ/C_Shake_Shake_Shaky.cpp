#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; 
    while(t--) {
        int32_t n, k;
        cin >> n >> k;
        vector <int32_t> a(n);

        int l = 1, h = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            h = max(h, a[i]);
        }

        auto check = [&](const int m){
            int std = 0;
            for(int i = 0; i < n and std < k; i++)
                std += (a[i]/m);
            return std >= k;
        };

        int ans = 0;
        while (l <= h){
            int mid = l + (h - l)/2;
            if(check(mid)) {
                ans = mid;
                l = mid + 1;
            } else h = mid - 1;
        }

        cout << ans <<'\n';
    }
    return 0;
}