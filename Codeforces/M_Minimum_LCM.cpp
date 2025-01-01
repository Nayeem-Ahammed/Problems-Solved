#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        int r = 1;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                r = n/i;
                break;
            }
        }
        cout << r << ' ' << n-r << endl;
    }
    return 0;
}