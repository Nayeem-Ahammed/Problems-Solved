#include <bits/stdc++.h>
using namespace std;

bool pari_nA(int a[]) {
    vector <pair <int, int>> vp = {{3, 0}, {0, 3}, {1, 1}};
    int b[3] = {0};
    for(auto m1 : vp) {
        for(auto m2 : vp) {
            for(auto m3 : vp) {
                b[0] = m1.first + m2.first;
                b[1] = m1.second + m3.first;
                b[2] = m2.second + m3.second;

                if(equal(a, a + 3, b)) return true;
            }
        }
    }
    
    return false;
}

int main() {
    
    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        int a[3];
        for(auto &e : a) cin >> e;
        
        cout << "Case " << i << ": ";
        pari_nA(a) ? cout << "perfectus\n" : cout << "invalidum\n";

    }
    return 0;
}
