#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, x; cin >> n >> x;
    vector <int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    
    int i = 0, j = n-1;
    int cnt = 0;
    while (i <= j){
        if (a[i]+a[j] <= x) {
            cnt++;
            i++; j--;
        }
        else{
            cnt++; i++;
        }
    }

    cout << cnt << endl;

}