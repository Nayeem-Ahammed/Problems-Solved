#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        vp.push_back({a, 1});
        vp.push_back({b, -1});
    }

    sort(vp.begin(), vp.end());

    int curr = 0;
    int mx = 0;
    for (auto x : vp) {
        curr += x.second;
        mx = max(mx, curr);
    }

    cout << mx << endl;
    return 0;
}
