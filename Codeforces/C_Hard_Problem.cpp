#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t t = 1; cin >> t;
    while (t--) {
        int32_t n, a, b, c;
        cin >> n >> a >> b >> c;

        int cnt = 0, r = 0;
        cnt += min(a, n);

        cnt += min(b, n);
        cnt += min(2*n - cnt, c);

        cout << cnt <<'\n';

    }
    return 0;
}
