#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >>n;
        vector <pair<int, int>> a(n);
        for(auto & i : a) {
            cin >> i.first >> i.second;
        }

        int a1,b1,a2,b2; cin >> a1 >>b1 >>a2 >>b2;
        long long d = 1LL*(a2-a1)*(a2-a1) + 1LL*(b2-b1)*(b2-b1);

        bool f = true;
        for(auto &[x, y] : a) {
            long long h = 1LL*(a2-x)*(a2-x) + 1LL*(b2-y)*(b2-y);

            if (h <= d) {
                f = false; break;
            }
        }

        if (f) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}