#include <bits/stdc++.h>
#define all(x)  x.begin(), x.end()

using ll = long long;
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector <int> f(n+1, 0);
    for(int i = n-1; i > 0; i--) {
        f[i] = f[i+1] + ((s[i] == '1') ? 1 : -1);
    }  

    sort(all(f), greater<int>());

    int g = 1, sum = 0;
    for(int i = 0; i < n; i++) {
        sum += f[i];
        g++;
        if(sum >= k) {
            cout << g <<'\n';
            return;
        }
    }

    cout << -1 <<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}