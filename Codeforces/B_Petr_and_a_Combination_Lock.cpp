#include <bits/stdc++.h>
using namespace std;
int n;
bool possible(vector<int>a, int k, int ds){
    
    if(k == n) return ds % 360 == 0;

    bool add = possible(a, k+1, ds+a[k]);
    
    bool substract = possible(a, k+1, ds-a[k]);

    return add || substract;
}
int main()
{
    cin >> n;
    
    vector <int> a(n);
    for(auto &i : a) cin >> i;
    
    int ds = a[0];
    bool f = possible(a, 1, ds);
    

    if (f) cout << "YES\n";
    else cout << "NO\n";
}