#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6;
int a[mx+1];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        memset(a, 0, 4*(n+1));

        string s; cin >> s;

        long long ans = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= n and s[j-1] != '1'; j += i) {
                if(s[j-1] == '0') ans += i;
                s[j-1] = '2';
            }          
        }
       

        cout << ans << '\n';
    }
    return 0;
}