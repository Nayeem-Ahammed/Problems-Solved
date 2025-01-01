#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        if(a > b) swap (a, b);

        bool f = true;
        if (a*2 < b) f = false;
        else {
            a %= 3; b %= 3;
            if (a > b) swap (a, b);

            if ((!a and !b ) or (a == 1 and b == 2)) f = true;
            else f = false;
        }

        if (!f) cout << "NO\n";
        else cout << "YES\n";

    }

    return 0;
}
