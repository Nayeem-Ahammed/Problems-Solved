#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        bool fg = 0;
        if(s[0] == '1' or s[n-1] == '1') fg = 1;

        for(int i = 1; i < n and !fg; i++){
            if(s[i] == '1' and s[i] == s[i-1]) fg = 1;
        }

        cout << (fg ? "YES\n" : "NO\n");        
    }
    return 0;
}