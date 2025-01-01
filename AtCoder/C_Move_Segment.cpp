#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s; cin >> s;

    int i = 0, cnt = 1;
    while (i < n and cnt < k){
        cout << s[i];
        if(s[i] == '1' and s[i] != s[i+1])
            cnt++;
        i++;
    }
    
    string sub;
    while(i < n and s[i] == '0')
        sub += '0', i++;
    while(i < n and s[i] == '1'){
        cout << 1; i++;
    }
    cout << sub;
    while(i < n) cout << s[i], i++;
    
    cout << endl;
    return 0;
}