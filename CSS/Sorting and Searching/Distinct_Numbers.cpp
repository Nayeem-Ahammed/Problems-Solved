#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;
    vector <int> a(n);
    for(auto &i : a) cin >> i;
    int cnt = 1;
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++){
        if (a[i] != a[i-1]) cnt++;
    }
   
    cout << cnt << endl;
}