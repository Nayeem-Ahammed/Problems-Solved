#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; cin >> s;
    int n = int (s.size());

    for(int i = 1; i < n; i++) {
        int len = n - i;
        if (len > i and s.substr(0, len) == s.substr(i, len)) {
            cout << "YES\n" << s.substr(0, len);
            return;
        }
    }

    cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);

    solve();
    return 0;

    // 2nd formula
    string s; cin >> s;
    int n = s.size();

    string a, b, ans;
    map <string, int> mp;

    for(int i = 1; i <= n; i++){
        a = s.substr(0, i);
        b = s.substr(i, n-i);
        mp[a]++; mp[b]++;
        // cout << a << " " << b <<endl;
    }

    for(auto it : mp){
        if (it.second == 2) ans = it.first;
    }
    
    if (ans.size() > n/2) {
        cout <<"YES\n" << ans << endl;
    } else cout << "NO\n";

}