#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; while (t--)
    {
        int n; cin >> n;
        vector <int> a(n), b(n);
        for(auto &e : a) cin >> e;
        for(auto &e : b) cin >> e;

        if(a[0] != b[0]) reverse(a.begin(), a.end());
        
        bool ok = true;
        for(int i = 0; i < n and ok; i++){
            if(a[i] != b[i]) ok = false;
        }
        if(ok) cout << "Bob\n";
        else cout << "Alice\n";
    }
}