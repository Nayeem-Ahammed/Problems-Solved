#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int animals = 0;
        int r = n % 4;
        animals += n/4;
        if (r) animals++;
        
        cout << animals << endl;
    }
    return 0;
}