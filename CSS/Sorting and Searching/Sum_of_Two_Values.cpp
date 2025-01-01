#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, x; cin >> n >> x;
    vector <pair<int, int>> v;

    for(int i = 1; i <= n; i++){
        int p; cin >> p;
        v.emplace_back(p, i);
    }

    sort(v.begin(), v.end());

    int a = -1, b = -1;
    bool ok;
    for(int i = 0; i < n; i++){
        int need = x - v[i].first;
        ok = false;
        int l = i+1, r = n-1;
        
        while(l <= r){
            int mid = (l + r)/2;
            if(v[mid].first == need) {
                ok = true;
                a = v[i].second, b = v[mid].second;
                break;
            }
            else if(v[mid].first > need) r = mid-1;
            else l = mid + 1;
        }

        if(ok) break;
    }

    if(ok)
        cout << a <<' ' << b <<'\n';
    else cout <<"IMPOSSIBLE\n";
    return 0;
}