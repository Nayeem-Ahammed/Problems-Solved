#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n = 8;
    int row[n] = {0}, col[n] = {0};

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        bool f = false;
        for(int i = 0; i < n; i++){
            if(s[i] == '#'){
                f = true;
                col[i] = 1;
            }
        }
        if(f) row[i] = 1;
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!row[i] and !col[j]) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}