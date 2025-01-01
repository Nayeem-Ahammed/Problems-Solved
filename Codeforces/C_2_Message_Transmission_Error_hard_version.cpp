#include <bits/stdc++.h>
using namespace std;
vector<int> LPS (string s){
    int i, idx = 0, n = s.size();
    vector <int> lps(n);

    for(int i = 1; i < n; i++){
        if(idx > 0)
        if(s[i] == s[idx]) {
            lps[i] = ++idx;
            i++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s;
    vector <int> a = LPS(s);
}