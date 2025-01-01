#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    bool ok = true;
  
    if(n & 1) {
        ok = false;
    }
    map<char, int> mp;
    for(int i = 0; i < n-1 and ok; i += 2){
        if(s[i] != s[i+1]) ok = false;
        mp[s[i]]++;
        mp[s[i+1]]++;
        if(mp[s[i]] > 2 or mp[s[i+1]] > 2) ok = false;
    }
    
    (ok)? cout <<"Yes\n" : cout <<"No\n";
    return 0;
}