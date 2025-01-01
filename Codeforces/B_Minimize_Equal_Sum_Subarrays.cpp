#include <bits/stdc++.h>
using namespace std;

int_fast32_t main()
{
    int t; cin >> t; while (t--)
    {
        int n; cin >> n;
        vector <int> a(n);
        for(auto &i : a) cin >> i;
         
        cout << a[n-1] <<' ';
        for(int i = 0; i < n-1; i++)
            cout << a[i] <<' ';

        cout << '\n';
    }
}