#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    // int n = 1e5;
    // vector <int> a, v(n+1, 0);
    // for(int i = 1; i*i <= n; i++){
        
    //     a.push_back(i*i);
    //     cout << a[i-1] <<' ';
    //     v[a[i-1]] = 1;
    // }
    // cout <<"\n\n";
    // vector <int> sup(n, 0);
    // for(int i = 0; i < a.size(); i++){
    //     for(int j = i-1; j >0; j--){
    //         int val = a[i] - a[j];
    //         if(v[val]) cout << a[i] <<' ' << a[j] <<'\n';
    //     }
    // }
    ll t = 1; cin >> t;

    while (t--) {
        ll n; cin >> n;
        if(n % 2 == 0) 
        {
            int k = 1; 
            for(int i = 0; i < n; i += 2)
                cout << k <<' ' << k <<' ', k++;
            cout << '\n';
        }
        else
        {
            if(n < 27) cout << -1 << '\n';
            else
            {
                vector <int> a(n+1, 0);
                a[1]=a[10]=a[26] = 1;
                a[27]=a[11] = 2;
                int k = 3;
                for(int i = 2; i <= n; i += 2){
                    if(a[i] == 0){
                        a[i] = a[i+1] = k;
                        k++;
                    }
                }

                for(int i = 1; i<=n;i++) cout << a[i] <<' ';
                cout <<'\n';
            }
        }
    }
    return 0;
}