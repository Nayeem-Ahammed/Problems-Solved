#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long r, c; cin >> r >> c;
        long long ans = 0;
        
        
        if (r <= c) {
            ans += c*c;
            if (c & 1){
                ans -= (r - 1);
            } else {
                ans -= (2*c - r -1);
            }
        }
        else {
            ans += r*r;
            if (r & 1){
                ans -= (2*r - c -1);
            }else{
                ans -= (c-1);
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
