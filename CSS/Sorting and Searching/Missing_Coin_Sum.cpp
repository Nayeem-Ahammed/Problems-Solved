#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> v(n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());

    long long mx = 1;
    for(int i = 0; i < n; i++){
        if(v[i] > mx) break;
        mx += v[i];
    }

    cout << mx << '\n';

}