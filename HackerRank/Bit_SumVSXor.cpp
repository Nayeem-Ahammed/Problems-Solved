#include <iostream> // author : _Nayeem
using namespace std;
/*
    # (a + b) = (a ^ b) + 2(a & b);
    if (a + b) = (a ^ b), 
    so, (a & b) = 0
*/
int main()
{
    long long n; cin >> n;

    long long pos = 63 - __builtin_clzll(n) + 1;
    long long cnt1 =  __builtin_popcountll(n);   
    long long cnt = pos - cnt1;


    // long long cnt = 0;
    // while (n){
    //     if ((n&1) == 0) cnt++;
    //     n >>= 1;
    // }
    // Here, cnt == p (use any of them)
    long long ans = (1LL << cnt);
    if (n == 0) ans = 1;    // must use 1LL
    cout << ans << endl;   
    
}