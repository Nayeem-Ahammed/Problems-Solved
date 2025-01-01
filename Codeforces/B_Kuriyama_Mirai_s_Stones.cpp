#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    vector <ll> a(n), t1(n+1, 0), t2(n+1, 0);

    for(auto &i : a) cin >> i;
    for(int i = 0; i < n; i++) t1[i+1] = t1[i] + a[i];

    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) t2[i+1] = t2[i] + a[i];

    int q; cin >> q;
    while (q--) {
        int t, l, r; 
        cin >> t >> l >> r;

        cout << ((t == 1) ? (t1[r]-t1[l-1]) : (t2[r]-t2[l-1])) <<'\n';
    }

    return 0;
}