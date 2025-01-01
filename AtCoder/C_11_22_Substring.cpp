#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;

    vector <int> a;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '/') {
            int l = i-1, r = i+1, len = 1;
            while(0 <= 0 and r < n){
                if(s[l] == '1' and s[r] == '2') {
                    len += 2;
                    l--, r++;
                }else break;
            }
            ans = max(ans, len);
        }
    }

    cout << ans <<'\n';
    return 0;
}