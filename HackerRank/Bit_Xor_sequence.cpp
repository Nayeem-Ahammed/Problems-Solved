#include <iostream>
using namespace std;
int main()
{
    // 1, 3, 0, 4, 1, 7, 0, 8, 1, 11, 0, 12, 1, 15, 0, 16};
    // int ans = 0;
    // for(int i =7; i <11; i++){
    //     ans ^= a[i];
    //     cout << ans << endl;
    // }
    // return 0;
    int q; cin >> q;
    while (q--) {

        long long l, r; cin >> l >> r;
        
        long long ans = 0, tmp;
        int rem = l%4;
        if (rem == 0) tmp = l;
        else if (rem == 1) tmp = 1;
        else if (rem == 2) tmp = l+1;
        else tmp = 0;
        ans ^= tmp;
        while(tmp != 0 and l <= r) {
            l++;
            tmp ^= l;
            ans ^= tmp;
        }

        rem = r%4;
        if (rem == 0) tmp = r;
        else if (rem == 1) tmp = 1;
        else if (rem == 2) tmp = r+1;
        else tmp = 0;
        while(r % 4 != 3 and l <= r){
            ans ^= r;
            r--;
        }
        int ex = r - l + 1;
        if ((ex/4) & 1) ans ^= 2;
        
        cout << ans << endl;
    }
}