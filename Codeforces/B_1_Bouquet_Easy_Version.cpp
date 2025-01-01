#include <bits/stdc++.h>
using namespace std;
void vondami()
{
    int64_t n, m, cur = 0, mx = 0; 
    cin >> n >> m;
    vector <int> a(n);
    for(auto &e : a) cin >> e;

    sort(a.begin(), a.end());

    int i = 0, j = 0;
    for( ; j < n; j++) {
        cur += a[j];
        while (i <= j and (cur > m or a[j]-a[i] > 1)) {
            cur -= a[i];
            i++;
        }
        mx = max(mx, cur);
        
    }
    cout << mx <<'\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int32_t t = 1; cin >> t;

    while (t--) 
        vondami();
    return 0;
}