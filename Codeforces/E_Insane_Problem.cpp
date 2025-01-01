#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mx = 1e5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t t = 1; cin >> t;
    while (t--) {
        ll k; cin >> k;
        ll l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        ll cnt = 0;
        for(ll i = l1; i <= r1; i++){
            ll x = i;
            while (x <= r2) {
                if(x >= l2) cnt++;
                if(x > r2/k) break;
                x *= k;
            }
        }

        cout << cnt <<'\n';
    }
    return 0;
}