#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while (t--) {
        int n, x; cin >> n >> x;
        vector <long long> a(n), preS(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());

        int h = a[0];
    
        for(int i=1; i < n and x > 0; i++){
            long long water = i * (a[i]-a[i-1]);
            if (x >= water) {
                h = a[i];
                x -= water;
            }
            else {
                long long mx_possible = x/i;
                h += mx_possible;
                x = 0; break;
            }
        }
        if (x) h += (x/n);

        cout << h << endl;

    }
}