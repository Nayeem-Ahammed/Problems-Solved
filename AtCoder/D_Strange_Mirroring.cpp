#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s, p;
    cin >> s;
    p = s;
    transform (s.begin(), s.end(), s.begin(), [](char c) {
        return islower(c) ? toupper(c) : tolower(c);
    });

    p += s;
    int n = p.size();
    
    int q; cin >> q;
    while(q--)
    {
        intmax_t k; cin >> k;
    }
    return 0;
}