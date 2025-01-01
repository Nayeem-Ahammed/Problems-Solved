#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
char a[1005][1005];
int n, m;

int traped(int i, int j) {
    if(i < 0 or j < 0 or i >= n or j >= m) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int ans = -1;
    dp[i][j] = 1;
    if(a[i][j] == 'L') ans = max(ans, traped(i, j-1));
    else if(a[i][j] == 'R') ans = max(ans, traped(i, j+1));
    else if(a[i][j] == 'U') ans = max(ans, traped(i-1, j));
    else if(a[i][j] == 'D') ans = max(ans, traped(i+1, j));
    else {
        ans = max(ans, traped(i, j-1));
        ans = max(ans, traped(i, j+1));
        ans = max(ans, traped(i-1, j));
        ans = max(ans, traped(i+1, j));
    }
    dp[i][j] = ans;
    return dp[i][j];
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t = 1; cin >> t;
    while (t--) {
        cin >> n >> m;

        // can't use directly memset() in 2D array
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++)
                dp[i][j] = -1;
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) 
                cin >> a[i][j];
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(traped(i, j) == 1) ans++;
            }
        }

        cout << ans << '\n';
        
    }
    return 0;
} 