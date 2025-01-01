#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        // vector <int> a(n+2, 0); or
        int a[n+2] = {0};   

        bool f = true;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            a[x] = 1;
            if ((i == 1 or a[x+1] == 1 or a[x-1] == 1 ) and f) f = true;
            else f = false;
        }

        f ? cout << "YES\n" : cout << "NO\n";
    }
}