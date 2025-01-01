#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    for(int k = 1; k <= t; k++) {
        vector <int> a(3), b(3, 0);
        for(auto &i : a) cin >> i;

        cout << "Case " <<k << ": ";
        bool f = false;
        vector <pair <int, int>> match = {{3, 0}, {0, 3}, {1, 1}};

        for(auto m1 : match) {
            for(auto m2 : match) {
                for(auto m3 : match) {
                    b[0] = m1.first + m2.first;
                    b[1] = m2.second + m3.first;
                    b[2] = m3.second + m2.second;

                    if(a==b) {
                        f = true;
                        cout <<"perfectus\n";
                        continue;
                    }
                }
            }
        }
        if(!f) cout << "invalidum\n";
    }
    
}