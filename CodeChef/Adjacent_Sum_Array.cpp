#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
	    int n; cin >> n;
	    vector<int> b(n-1), a(n);
        for(auto &i : b) cin >> i;
        sort(b.begin(), b.end());

        a[0] = 1;
        for(int i = 0; i < n-1; i++) {
            a[i+1] = b[i]-a[i];
        }

        for(int i = 0; i < n; i++)
            cout << a[i] <<" \n"[i==n-1];
	}

}
