#include <bits/stdc++.h>
using namespace std;

int_fast32_t main(void)
{
    int32_t t; cin >> t;
    while (t--)
    {
        int32_t n; cin >> n;
        vector <int32_t> a(n);
        for(auto &i : a) cin >> i;

        bool ok = true;
        int32_t idx = n-1, mn = a[n-1];
        int i = n-2;
        while(i >= 0 and a[i] <= mn){
            mn = a[i];
            idx = i;
            i--;
        }

        for( ; i >= 0; i--)
        {
            if(a[i] <= mn) {
                ok = false;
                idx = -1;
                break;
            }
        }

        cout << idx <<'\n';
    }
}