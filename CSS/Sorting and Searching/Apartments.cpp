#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m,k; cin >> n >> m >> k;
    vector <int> a(n), b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());

    int cnt = 0;
    int i = 0, j = 0;
    while (i < n and j < m){
        if ((a[i]-k <= b[j] and b[j] <= a[i]+k)){
            cnt++; i++; j++;
        }
        else if (a[i]-k > b[j]) j++;
        else if (a[i]+k < b[j]) i++;
    }

    cout << cnt << endl;
}