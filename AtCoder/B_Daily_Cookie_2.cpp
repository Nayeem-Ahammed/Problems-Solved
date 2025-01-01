#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, k; 
    cin >> n >> k;
    string s; cin >> s;

    int i = n-1;
    while (i >= 0 and k){
        if(s[i] == '@') k--;
        s[i] = '.';
        i--;
    }

    cout << s <<'\n';
    
    return 0;
}