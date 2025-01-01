#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;

        if(s == string(n, c)) {
            cout <<"0\n";
            continue;
        }
        bool ok = true;
        for(int i = 1; i <= n; i++){
            ok = true;
            for(int j = i; j <= n; j += i) {
                if(s[j-1] != c) ok = false;
            }

            if(ok) {
                cout <<"1\n" << i <<'\n';
                break;
            }
        }

        if(!ok) cout <<"2\n" <<n-1 <<' ' << n <<'\n';

    }
    return 0;
}