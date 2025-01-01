#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }

        int single = 0, cnt = 0;
        for(auto it : mp){
            if(it.second == 1) single++;
            else cnt++;
        }
        
        cout << ((single+1)/2)*2 + cnt <<'\n';
        
        
    }
    return 0;
}