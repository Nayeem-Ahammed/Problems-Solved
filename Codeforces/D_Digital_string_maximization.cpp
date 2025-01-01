#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        int n = s.size();


        for(int i = 1; i < n; i++) {
            int j = i;
            while (s[j] > s[j-1] + 1 and j > 0){
                s[j]--;
                swap (s[j], s[j-1]);
                --j;
                // cout << s <<'\n';
            }
        }

        cout << s <<'\n';
    }
    return 0;
}