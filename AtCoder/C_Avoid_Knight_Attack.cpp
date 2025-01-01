#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n = 1e9+5;
set<pair<int, int>> vp; 

bool valid(int a, int b) {
    return a > 0 && a <= n && b > 0 && b <= n;
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int m;
    cin >> n >> m;
    ll cnt = 0;

    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;

        if(vp.find({a, b}) == vp.end()) {
            cnt++;
            vp.insert({a, b});
        }

        vector <pair<int, int>> moves = {
            {a+2, b+1}, {a+1, b+2}, {a-1, b+2}, {a-2, b+1},
            {a-2, b-1}, {a-1, b-2}, {a+1, b-2}, {a+2, b-1}
        };

        for(auto it : moves) {
            int x = it.first;
            int y = it.second;
            if(valid(x, y) && vp.find({x, y}) == vp.end()) {
                cnt++;
                vp.insert({x, y});
            }
        }
    }

    cout << 1LL * n * n - cnt << endl;
    return 0;
}
