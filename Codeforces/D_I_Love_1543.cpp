#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const string my = "1543";

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n, m; cin >> n >> m;
        char a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        }

        int top = 0, bottom = n-1, left = 0, right = m-1;

        int ans = 0;
        while(top <= bottom and left <= right) {
            string s = "";

            for(int i = left; i <= right; ++i)
                s += to_string(a[top][i]);
            ++top;

            for(int i = top; i <= bottom; ++i)
                s += to_string(a[i][right]);
            --right;

            if(top <= bottom) {
                for(int i = right; i >= left; --i)
                    s += to_string(a[bottom][i]);
                --bottom;
            }

            if(left <= right) {
                for(int i = bottom; i >= top; --i)
                    s += to_string(a[i][left]);
                ++left;
            }

            // cout << s << endl;
            

            for(int i = 0; i < n-4; i++){
                string x = s.substr(i, 4);
                if(x == my) {
                    ans++;
                    i+=3;
                }
            }

        }
        
        cout << ans << '\n';
        
    }
    return 0;
}