#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector <pair<int, int>> arr;
        int p,q, r, s;
        p = q = r = s = 0;

        for(int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            arr.emplace_back(b, a);          
        }
        
        sort(arr.begin(), arr.end());

        for(int i = 0; i < (n+1)/2; i++){
            cout << arr[i].second << ' ' << arr[i].first <<' ';
        }
        for(int i=n-1; i >= (n+1)/2; i--){
            cout << arr[i].second << ' ' << arr[i].first << ' ';
        }

        cout << endl;
    }
    return 0;
}