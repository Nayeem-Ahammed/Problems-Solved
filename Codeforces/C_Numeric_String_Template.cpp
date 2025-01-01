#include <bits/stdc++.h>
using namespace std;
void solve(){

    int n; cin >> n;
    vector <int> a(n);
    for(auto &i : a) cin >> i;
    int m; cin >> m;

    while (m--) {
        bool f = true;
        string s; cin >> s;
        if (s.size() != n) f = false;

        unordered_map<int, char> m1;
        unordered_map<char, int> m2;

        for(int i = 0; i < n and f; i++) {
            if (m1.find(a[i]) == m1.end() and m2.find(s[i]) == m2.end()){
                m1[a[i]] = s[i];
                m2[s[i]] = a[i];
            }
            else if (m1.count(a[i]) and m2[s[i]] != a[i]) f = false;
            else if (m2.count(s[i]) and m1[a[i]] != s[i]) f = false;

        }

        f ? cout <<"YES\n" : cout << "NO\n";

    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;

}