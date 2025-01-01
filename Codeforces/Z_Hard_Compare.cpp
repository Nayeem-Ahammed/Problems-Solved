#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(1LL * b * log2(a) > 1LL * d * log2(c)) cout <<"YES";
    else cout << "NO";
}

// a^b = e^(log(a^b))
// c^d = e^(log(c^d))
// a^b > c^d
// e^(b*log(a)) > e^(d*log(c))
// b*log(a) > d*log(c)
