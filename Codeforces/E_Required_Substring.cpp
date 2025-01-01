#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m = 1e9+7;
int fact(int n){
    int ans = 1;
    for(int i = 2; i <= n; i++){
        ans = (ans * i) % m;
    }

    return ans % m;
}
int nCr(int n, int r){
    return (fact(n)/(fact(r) * fact(n-r)) % m) % m;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    int l = s.size();
    int x = max(26, n), y = n-l;
    cout << nCr(x+y-1, x) << endl;
    
    return 0;
}