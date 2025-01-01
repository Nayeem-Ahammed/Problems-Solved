#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n, m; cin >> n >> m;
        vector<string> a(n);
        for(auto &i : a) cin >> i;
        int p =m;
        // auto cmp = [](const string &s1, const string &s2) {
        //     return s1.size() < s2.size();
        // };

        // sort(a.begin(), a.end(), cmp);

    
        int cnt = 0;
        for(int i =0; i < n and m > 0; i++) {
            if(a[i].size() <= m) {
                cnt++;
                m-= a[i].size();
            }
            else m = 0;
        }

        cout <<cnt <<'\n';
    }
    return 0;
}