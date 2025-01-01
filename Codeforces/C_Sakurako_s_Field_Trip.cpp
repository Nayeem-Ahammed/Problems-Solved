#include <bits/stdc++.h>
using namespace std;

int find_minimal_disturbance(vector<int>& a) {
    int n = a.size();
    int disturbance = 0;
    
    // Step 1: Calculate initial disturbances
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            disturbance++;
        }
    }

    // If no disturbances, we're already at the optimal state
    if (disturbance == 0) {
        return 0;
    }

    // Step 2: Try reducing disturbances by checking critical swap regions
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] == a[i - 1] && a[i] == a[i + 1]) {
            // Case when the disturbance is in the middle of a "chain" of equal elements
            return max(0, disturbance - 2);
        }
    }
    
    // Otherwise, we can reduce by at most 1 by swapping adjacent pairs
    return max(0, disturbance - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        cout << find_minimal_disturbance(a) << endl;
    }
    
    return 0;
}
