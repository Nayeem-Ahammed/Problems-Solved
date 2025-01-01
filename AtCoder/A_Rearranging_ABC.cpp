#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s;
    
    sort(s.begin(), s.end());
    if(s == "ABC") cout << "Yes\n";
    else cout << "No\n";
    
    return 0;
}