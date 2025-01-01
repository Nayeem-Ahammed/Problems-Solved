#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector <pair<int, int>> vp(n);

    for(int i = 0; i < n; i++){
        cin >> vp[i].first >> vp[i].second;
    }

    auto cmp = [&](const pair<int, int>&a, const pair<int, int>&b){
        return a.second < b.second;
    };
    sort(vp.begin(), vp.end(), cmp);
    
    int cnt = 0, last = 0;
    for(int i = 0; i < n; i++){
        if(vp[i].first >= last){
            cnt++;
            last = vp[i].second;
        }
    }

    cout << cnt << '\n';

    return 0;
}