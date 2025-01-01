#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;
    while(t--)
    {
        vector <vector <int>> v(11, vector<int>(11, -1));
        int n, a, b;
        cin >> n >> a >> b;
        string s; cin >> s;

        int x = 0, y = 0;
        bool ok = false;
        for(int i = 0; i <= 200; i++){
            if(s[i%n] == 'N') y++;
            else if(s[i%n] == 'E') x++;
            else if(s[i%n] == 'S') y--;
            else x--;
            if(x == a and y == b){
                ok = true;
                break;
            }
        }
        
        // // cout << x <<' ' << y <<'\n';
        // // continue;
        // if(!ok and x > 0 and y > 0 and (a%x == 0 and b%y==0) and (a/x == b/y))
        //     ok = true;

        if(ok) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}