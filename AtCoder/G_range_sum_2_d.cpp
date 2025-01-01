#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, m, q; cin >> n >> m >> q;
    long long a[n+1][m+1] ,f[n+1][m+1] = {0};

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= m; j++)
    //         cin >> a[i][j];
    // }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++){
            long long x; cin >> x;
            f[i][j] += x + f[i][j-1] + f[i-1][j] - f[i-1][j-1];
        }
    }

    while (q--) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        cout << f[x2][y2] - f[x1-1][y2] - f[x2][y1-1] + f[x1-1][y1-1] << '\n';
    }
    return 0;
}