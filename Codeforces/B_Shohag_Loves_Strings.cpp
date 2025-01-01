#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        string s, p = "-1"; cin >> s;
        int n = s.length();

        bool ok = false;
        for(int i = 0; i < n; i++){
            if(i < n-1 and s[i] == s[i+1]){
                ok = true;
                p = s.substr(i, 2);
                break;
            }
            else {
                if(i+2 < n and s[i+1] != s[i+2] and s[i+2] != s[i]) {
                    ok = true;
                    p = s.substr(i, 3);
                    break;
                }
            }
        }

        cout << p <<'\n';

    }
    return 0;
}