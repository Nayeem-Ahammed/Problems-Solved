#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;
    vector <long long> a(n), pre(n+1);
    for(auto &e : a) cin >> e;
    for(int i = 0; i < n; i++)
        pre[i+1] = pre[i] + a[i];
    
    while(q--)
    {
        int l, r; cin >> l >> r;
        cout << pre[r] - pre[l-1] << '\n';
    }

    return 0;
}