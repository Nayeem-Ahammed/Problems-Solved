#include <iostream> // author : _Nayeem
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        unsigned long long n; cin >> n;
        int cnt = 0;
        cnt += __builtin_ctzll(n);
        cnt += __builtin_popcountll(n);


        if (cnt & 1) cout << "Richard\n";
        else cout << "Louise\n";
    }
}