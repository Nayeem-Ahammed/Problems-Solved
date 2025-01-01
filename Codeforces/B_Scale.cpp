#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;

        
        vector <string> a;
        for(int i = 0; i < n; i++){
            string s , tmp; cin >> s;
            if (i % k == 0) {
                for(int j = 0; j < n; j+=k){
                    tmp+=s[j];
                }
                a.push_back(tmp);
            }
        }
        
        for(auto it : a) cout << it << endl;

    }
    return 0;
}