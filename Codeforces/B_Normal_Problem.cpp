#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t t = 1; cin >> t;
    while (t--) {
        
        string s; cin >> s;
        
        reverse(s.begin(), s.end());

        for(auto i : s){
            if(i == 'p') cout << 'q';
            else if (i == 'q') cout << 'p';
            else cout << i;
        }
        cout <<'\n';

    }
    return 0;
}