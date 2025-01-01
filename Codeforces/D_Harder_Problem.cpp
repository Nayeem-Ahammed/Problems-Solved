#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mx = 1e5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t t = 1; cin >> t;
    while (t--) {
        int32_t n; cin >> n;
        vector <int> a(n), b(n, 0),z(n+1, 0), f;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i = 1; i <= n; i++){
            if(mp[i] == 0) f.emplace_back(i);
        }

        for(int i = 0; i < n; i++) {
            if(mp[a[i]]) {
                b[i] = a[i];
                mp[a[i]] = 0;
            }
        }
        
        for(int i = 0, j = 0; i < n; i++){
            if(b[i] == 0){
                b[i] = f[j];
                j++;
            }
        }

        for(auto it : b) cout << it <<' ';
        cout << '\n';

    }
    return 0;
}