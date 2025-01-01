#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    string sub = s.substr(max(n/2-1, 0), min(3,n));
    // cout << sub <<'\n';
    if(n &1 and sub == "1/2" or sub == "/") cout <<"Yes\n";
    else cout << "No\n";
    return 0;
}