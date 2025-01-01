#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a; cin >> a;
        
        if (
            (102 <= a and a <= 109) or
            (1010 <= a and a <= 1099) or
            (10100 <= a and a <= 10999)
        ) cout << "YES\n";
        else cout << "NO\n";
    }
}