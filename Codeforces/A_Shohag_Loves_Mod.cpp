#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        for(int i = 1; i <= n; i++)
            cout << 2*i - 1 <<' ';
        cout <<'\n';
        
        
    }
    return 0;
}