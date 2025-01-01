#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        string s; cin >> s;
        
        

        map<char, int> mp;
        vector <pair <char, int>> vp;

        for(auto it : s) {
            mp[it]++;
        }
        
        auto it = mp.begin();

        int mx, mn;
        char a, b;
        mx = mn = it->second;
        a = b = it->first;
        
        for(auto it : mp) {
            if(it.second >= mx) {a = it.first; mx = it.second; }
            else if(it.second < mn) {b = it.first; mn = it.second; }
        }

        // cout << a <<" " << b <<'\n';


        bool done = false;
        for(auto it : s) {
            if(it == b and !done){
                cout << a;
                done = true;
            }
            else cout << it;
        }
        cout <<'\n';
    }
    return 0;
} 