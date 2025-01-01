#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; while(t--){
        int n; cin >> n;
        vector <int> a(n);
        int g = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            g = __gcd(g, a[i]);
        }

        if(g == 1){
            cout << 0 << endl;
            continue;
        }

        int ans = n;
        for(int i = 0; i < n; i++){
            int g = __gcd(a[i], i+1);

            for(int j = 0; j < n; j++){
                g = __gcd(g, a[j]);
                if(g == 1){
                    ans = min(ans, n-i);
                    break;
                }
            }
        }

        for(int i = 0; i < n; i++){
            int g = __gcd(a[i], i+1);
            for(int j = i+1; j < n; j++){
                g = __gcd(g, __gcd(a[j], j+1));

                for(int k = 0; k < n; k++){
                    g = __gcd(g, a[k]);
                    if(g == 1){
                        ans = min(ans, 2*n-i-j);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}