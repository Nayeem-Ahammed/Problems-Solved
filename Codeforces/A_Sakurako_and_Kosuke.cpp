#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        
        if(n % 2 == 1) cout << "Kosuke\n";
        else cout << "Sakurako\n";       
        
    }
    return 0;
}