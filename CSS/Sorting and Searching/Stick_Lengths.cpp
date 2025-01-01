#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for(auto &i : a) cin >> i;

    sort(a.begin(), a.end());
    long long ans = 0;
    int avg = a[n/2];

    for(int i = 0; i < a.size(); i++){
        ans += abs(avg - a[i]);
    }
    cout << ans << '\n';
}