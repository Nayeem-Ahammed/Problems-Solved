#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for(auto &i : a) cin >> i;
    int ans = 0;
    for(auto it : a) ans ^= it;
    cout << ans << endl;
}