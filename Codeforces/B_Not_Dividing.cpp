#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector <int> a(n);
        for(auto &i : a) cin >> i;
        for(int i = 0; i < n; i++){
            if (a[i] == 1){
                a[i] += 1;
                if (i != 0) i--;
            }
            else {
                if (a[i] % a[i-1] == 0) a[i] += 1;
            }
        }

        for(auto it : a) cout << it << ' ';
        cout << endl;
    }
}