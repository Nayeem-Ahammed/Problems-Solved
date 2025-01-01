#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6;
int a[mx+1];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    memset(a, 0, sizeof(a));

    for(int i = 1; i <= mx; i++){
        for(int j = i; j <= mx; j += i){
            a[j] += i;
        }
    }

    int q; cin >> q;
    while(q--) {
        int n; cin >> n; // cout << a[n] <<'\n';
        if(a[n]-n > n) cout << "abundant\n";
        else if(a[n]-n < n) cout << "deficient\n";
        else cout << "perfect\n";
    }
    return 0;
}