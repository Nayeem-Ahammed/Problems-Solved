#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; 
    cin >> s;
    sort(s.begin(), s.end());
    (s == "122333") ? cout <<"Yes\n": cout <<"No\n";
    return 0;
}