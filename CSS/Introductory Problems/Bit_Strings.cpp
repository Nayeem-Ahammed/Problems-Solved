#include <bits/stdc++.h>
using namespace std;
int m = 1e9+7;

// using recursion
int binExp(int base, int pow) {
    if (!pow) return 1;
    long long res = binExp(base, pow/2);
    if (pow & 1) return ((res*res % m) * base) % m;
    else return (res*res) % m;
}

// basic technique
int binExp2(int base, int pow) {
    int ans = 1;
    while (pow) {
        if (pow & 1) {
            ans = (1LL * ans * base) % m; // 1LL for all terms to long long
            pow--;
        } else {
            base = (1LL * base * base) % m; // 1LL for all terms to long long
            pow /= 2;
        }
    }

    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    cout << binExp2(2,n);

    return 0;
}