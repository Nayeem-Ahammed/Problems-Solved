#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) cin >> a[i][j];
        }

        long long ans = 0;
        
        for(int row = 0; row < n; row++){
            int i = row, j = 0;
            int mn = 0;
            while(i < n and j < n){
                mn = min(mn, a[i][j]);
                ++i; ++j;
            }
            ans -= mn;
        }
        for(int col = 1; col < n; col++){
            int i = 0, j = col;
            int mn = 0;
            while(i < n and j < n){
                mn = min(mn, a[i][j]);
                ++i; ++j;
            }
            ans -= mn;
        }
        
        cout << ans << endl;
    }
    return 0;
}