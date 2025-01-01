#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n, m; cin >> n >> m;
    multiset <int> a;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.insert(x);
    }

    while(m--){
        int k; cin >> k;

        auto it = a.upper_bound(k);
        if (it != a.begin()){
            --it;
            cout << *it << endl;
            a.erase(it);
        }
        else cout << -1 << endl;
    }

}