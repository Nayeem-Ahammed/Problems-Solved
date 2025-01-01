#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    while (true) {
        int n; cin >> n;
        if(n == 0) break;

        vector <int> a(n);       
        for(auto &i : a) cin >> i;
        sort(a.rbegin(), a.rend());

        int cnt = 0;
        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                int val = a[i] - a[j];
                for(int k = j+1; k < n; k++){
                    if(a[k] < val){
                        cnt += (n-k);
                        break;
                    } 
                }
            }
        } 
        cout << cnt <<'\n';
    }

    return 0;
}