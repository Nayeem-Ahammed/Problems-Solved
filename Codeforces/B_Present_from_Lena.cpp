#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;

    for(int i = 1; i <= n+1; i++){
        for(int k = n; k >= i; k--) cout << "  ";
        int val = 0;
        for(int j = 1; j <= (2*i -1); j++) {
            cout << val ;
            if (j != (2*i-1)) cout <<' ';
            if (j < i) val++;
            else val--;
        }
        cout << endl;

    }

    // 2nd half
    for(int i = n; i > 0; i--) {  
        for(int k = n; k >= i; k--) cout << "  ";
        int val = 0;
        for(int j = 1; j <= 2*(i-1)+1; j++) {
            cout << val;
            if (j != 2*(i-1)+1) cout << ' ';
            if (j < i) val++;
            else val--;
        }
        cout << endl;
    }

    return 0;
    
}