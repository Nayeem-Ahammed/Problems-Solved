#include <iostream>
using namespace  std;
int getBit(int n, int i){
    int musk = 1 << i;
    return n & musk;
}
int main()
{
    int l, r; cin >> l >> r;
    int mx = 0;
    for(int i = 31; i >= 0; i--){
        if (l >> i != r >> i) {
            mx = (1 << i+1) -1;
            break;
        }
    }
    cout << mx << endl;
}