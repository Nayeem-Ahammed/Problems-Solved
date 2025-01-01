#include <bits/stdc++.h>
using namespace std;

void val_er_code()
{
    int n; cin >> n;
    vector <long long> a(n), psum(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        psum[i+1] = psum[i] + a[i];
    }

    long long ans = 0;
    for(int len = 1; len <= n/2; ++len)
    {
        int i = 0;
        if(n%len == 0){
            long long mn = 1e18, mx = 0;
            for(int j = len; j <= n; j += len) {
                long long val = psum[j] - psum[i];
                i = j;
                mx = max(mx, val);
                mn = min(mn, val);
            }

            ans = max(ans, mx-mn);
        }
    }

    cout << ans <<'\n';
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int val = 1; cin >> val;
    while (val--) 
        val_er_code();
    return 0;
}