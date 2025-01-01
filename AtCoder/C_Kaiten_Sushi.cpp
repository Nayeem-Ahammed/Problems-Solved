#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, k; 
    cin >> n >> k;

    vector <int> a(n), ans (k+1, 0);
    for(auto &i : a) cin >> i;
    int mn = *min_element(a.begin(), a.end());

    vector <pair< int, int>> vp;
    for(int i = 0; i < k; i++){
        int q; cin >> q;
        vp.emplace_back(q, i+1);
    }
    sort(vp.begin(), vp.end());


    int j = n-1;
    for(int q = 0; q < k; q++) {
        int val = vp[q].first;
        if(val < mn){
            ans[vp[q].second] = -1;
            continue;
        }
        for(int i = 0; i <= j; i++){
            if(a[i] <= val){
                ans[vp[q].second] = i+1;
                j = i;
                break;
            }
        }
    }

    for(int i = 1; i <= k; i++) cout << ans[i] << '\n';
    
    return 0;
}