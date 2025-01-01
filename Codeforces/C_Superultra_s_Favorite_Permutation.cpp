#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        if(n < 5) {
            cout <<-1 <<'\n';
            continue;
        }

        
        for(int i = 1; i <= n; i+=2){
            if(i != 5) cout <<i <<' ';
        }
        cout <<"5 4 ";

        for(int i = 2; i <= n; i+=2){
            if(i != 4)cout <<i <<' ';
        }
        cout << '\n';
    }
    return 0;
}