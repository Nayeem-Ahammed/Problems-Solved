#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        k *= 2;

        vector <int> a(2*n), v(n+1, 0);

        for(auto &i : a) cin >> i;
        for(int i = 0; i < n; i++) v[a[i]]++;

        vector<int> a0, a1, a2;
        for(int i = 1; i <= n; i++){
            if (v[i] == 0) a0.push_back(i);
            else if(v[i] == 1) a1.push_back(i);
            else a2.push_back(i);
        }

        int cnt = 1;
        for(auto it : a2){
            if (cnt < k) {
                cnt += 2;
                cout << it << ' ' << it << ' ';
            }
        }
        for(auto it : a1){
            if (cnt <= k){
                cnt++;
                cout << it << ' ';
            }
        }
        cout << endl;

        cnt = 1;
        for(auto it : a0){
            if (cnt < k){
                cnt += 2;
                cout << it << ' ' << it << ' ';
            }
        }
        for(auto it : a1){
            if (cnt <= k){
                cnt++;
                cout << it << ' ';
            }
        }

        cout << endl;
    }
        
}