#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> a(n+1);
    for(int i=1; i <= n; i++) {
        int xx; cin >> xx;
        a[xx] = i;
    }

    int cnt = 1;
    for(int i = 2; i <= n; i++)
        if(a[i] < a[i-1]) cnt++;
    
    cout << cnt <<'\n';
}