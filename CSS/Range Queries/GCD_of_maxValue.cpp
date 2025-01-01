#include <bits/stdc++.h>
using namespace std;

// generate lcm by 128 bits
__int128_t lcm (__int128_t a, __int128_t b) {
    __int128_t g = __gcd(a, b);
    return (a / g) * b;
}

int main() {
    
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // we cann't 128 bits input !!
    // so, input 64 bits and then store it in 128 bits
    intmax_t x, y; cin >> x >> y;
    
    __int128_t a, b;    
    a = x, b = y;
    __int128_t n = lcm(a, b);

	// print 128 bits [cann't use 'cout']
    string s; 
    while(n > 0){
        s += '0' + (n%10);
        n /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s <<'\n';
    

    return 0;
}
