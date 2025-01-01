#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int i = 0, cnt = 0;
    while (k >= 0 and i < n){
        
        if(s[i] == '@' and k) {
            k--;
            cnt++;
        }
        else if (s[i] == '.') cnt++;
        // else break;
        i++;
    }

    cout << cnt <<'\n';
    return 0;
}