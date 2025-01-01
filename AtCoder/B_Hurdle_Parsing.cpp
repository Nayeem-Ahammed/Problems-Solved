#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s;
    vector <int> a;
    int cnt = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '|'){
            a.push_back(cnt);
            cnt = 0;
        } else cnt++;
    }

    for(int i = 0; i < a.size(); i++){
        cout <<a[i];
        if(i+1 < a.size()) cout <<' ';
        else cout << endl;
    }
    return 0;
}