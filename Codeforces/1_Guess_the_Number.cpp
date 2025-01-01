#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int l = 1, h = 1e6;

    while(l != h) {
        int m = (l+h) / 2;
        
        printf("%d\n", m);
        fflush(stdout);

        string s; cin >> s;
        if(s == "<") h = m-1;
        else l = m+1;
    }
    
    printf("! %d\n", h);
    fflush(stdout);

    return 0;
}