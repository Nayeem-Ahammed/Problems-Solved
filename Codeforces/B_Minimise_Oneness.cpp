#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s = "1";
        s += string(n-1, '0');

        cout << s << endl;
    }
    return 0;
}