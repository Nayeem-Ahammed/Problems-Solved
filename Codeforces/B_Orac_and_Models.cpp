#include <bits/stdc++.h>
using namespace std;
const int mx = 5e5;
int n, dp[mx] , s[mx];

int fun(int i) {
    if(i > n) return 0;
    if(dp[i] != -1) return dp[i];

    int cnt = 0;
    for(int j = 2*i; j <= n;  j += i)
        if(s[i] < s[j])
            cnt = max(cnt, 1 + fun(j));
    return dp[i] = cnt;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        cin >> n;

        for(int i = 1; i <= n; i++) {
            cin >> s[i];
            dp[i] = -1;
        }
        
        int maxi = -1;
        for(int i = 1; i <= n; i++) {
            maxi = max(maxi, 1 + fun(i));
        }

        cout << maxi << '\n';
    }
    return 0;
}