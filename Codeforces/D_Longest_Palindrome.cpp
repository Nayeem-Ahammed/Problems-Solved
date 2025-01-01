#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool isPalindrome(string s){
    int l = 0, r = s.size()-1;
    while(l < r){
        if (s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

void solve(string s, ll n) {
    for(ll i = n; i > 0; i--){
        for(ll j = 0; i+j <= n; j++) {
            string a = s.substr(j, i);
            if (isPalindrome(a)) {
                cout << a << endl;
                return;
            }
        }
    }

    cout << s[0] << endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    string s; cin >> s;
    ll n = s.size();
    solve(s, n);
    return 0;




    if (isPalindrome(s)) {
        cout << s << endl;
        return 0;
    }
    string ans ="";
    for(ll i = (1LL << n)-1; i > 0; i--){
        ll len = log2(i) - __builtin_ctzll(i) + 1;
        ll cnt = __builtin_popcountll(i);

        if (len == cnt){
            ll p = i, j = 0;
            string sub;
            while (p) {
                if (p & 1) sub += s[j];
                j++; p >>= 1;
            }
            if (isPalindrome(sub)) {
                if(ans.size() < sub.size()) ans = sub;
            }
        }
    }

    cout << ans << endl;
    
    
    return 0;
}