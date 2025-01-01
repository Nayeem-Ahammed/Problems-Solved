#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n, k; 
        cin >> n >> k;
        if(n == 1) cout <<1 <<'\n' <<1 <<'\n';
        else if(k == 1 or k == n) cout << -1 << '\n';
        else {
            if(k & 1) {
                cout <<5 <<'\n';
                cout <<1 <<' ' <<2 <<' ' <<k <<' ' <<k+1 <<' ' <<k+2 <<'\n';
            }
            else{
                cout <<3 <<'\n';
                cout <<1 <<' ' <<k <<' ' <<k+1 <<'\n';
            }
        }
        
    }
    return 0;
}