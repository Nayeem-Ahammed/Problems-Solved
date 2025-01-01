#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+5;
int a[mx];
void solve(){
    memset(a, 0, sizeof(a));

    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){
            a[j]++;
        }
    }
    cout << a[n] << endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;
    // while(t--) solve();
    while (t--) {
        int n; cin >> n;

        int cnt = 0, i;
        for(i = 1; i*i < n; i++){
            if(n%i == 0) cnt += 2;
        }

        if(i*i == n) cnt++;
        cout << cnt << endl;
    }
    return 0;
}