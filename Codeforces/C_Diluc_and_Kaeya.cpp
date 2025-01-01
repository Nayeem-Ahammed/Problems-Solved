#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int d = 0, k = 0;
        map<pair<int, int>, int> ratio; 
        
        for(int i = 0; i < n; i++){
            if(s[i] == 'D'){
                ++d;
            }else{
                ++k;
            }
            
            int g = __gcd(d, k);
            int reduced_d = d/g;
            int reduced_k = k/g;

            ratio[{reduced_d, reduced_k}]++;
            cout << ratio[{reduced_d, reduced_k}] << ' ';
        }
        cout << endl;
        
    }
    return 0;
}