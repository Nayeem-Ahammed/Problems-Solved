#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector <int> psum(n+1, 0);
        
        for(int i = 0; i < n; i++){
            psum[i+1] = psum[i] + s[i]-'0';
        }

        // for(auto it : psum) cout << it <<' ';
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; i <= j; i++){
                if(psum[j]-psum[i] == j-i+1)
                    cnt++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}