#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        string s,ss = ""; cin >> s;
        // for(int i = 0; i<m; i++) ss += '0';
        ss = string(m,'0');
        string b(6, 'x');
        int i = 0, cnt = 0;
        while (i <= (n-m)) {
            string sub = s.substr(i, m);

            if(sub == ss){
                cnt++;
                i += (m+k-1);
            } else i++;
        }
        
        cout << cnt <<'\n';
        
    }
    return 0;
}