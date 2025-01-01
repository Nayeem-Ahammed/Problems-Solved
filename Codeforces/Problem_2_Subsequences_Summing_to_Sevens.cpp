#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int32_t n; cin >> n;
    int a[n];
    for(auto &i : a) cin >> i;

    int64_t f[n+1] = {0};
    for(int i = 0; i < n; i++) f[i+1] = f[i] + a[i];

    bool ok = false;
    int num = 0;
    for(int k = n; k >= 1 and !ok; k--) {
        for(int i = 0; i <= n-k and !ok; i++) {
            ll sum = f[k+i] - f[i];
            if(sum % 7 == 0) {
                num = k;
                ok = true;
            }
        }
    }

    cout << num << '\n';

    return 0;
}