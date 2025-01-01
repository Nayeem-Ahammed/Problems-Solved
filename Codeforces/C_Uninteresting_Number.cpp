#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        int c2 = 0, c3 = 0, sum = 0;
        for(char c : s) {
            int x = c - '0';

            if(x == 2) c2++;
            if(x == 3) c3++;
            sum += x;
        }

        int need = (9 - (sum % 9)) % 9;

        bool ok = false;
        for(int i = 0; i <= c3 and !ok; i++) {
            
            int need2 = (need - 6*i) % 9; 
            if(need2 < 0) 
                need2 += 9;

            int inv = (need2 * 5) % 9; // inverse multiplicative
            if( inv <= c2)
                ok = true;
        }

        (ok) ? cout << "YES\n" : cout <<"NO\n";
    }
}