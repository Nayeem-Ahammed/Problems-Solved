#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;
    
    for(int i = 2; i <= n; i++){
        int cnt = 0, x = i;
        
        for(int j = 2; j*j <= x; j++){
            if(x % j == 0) {
                cnt++;
                while(x % j == 0) x /= j;
            }
        }

        cnt += (x > 1);
        ans += (cnt == 2);
    }

    cout << ans << endl;
}