#include <bits/stdc++.h>
using namespace std;

bool f(int a, int x, int b, int y){
    int cnt = 0;
    if(a > x) cnt++;
    else if(a < x) cnt--;

    if(b > y) cnt++;
    else if(b < y) cnt--;

    return cnt > 0;
}
int main()
{
    int t; cin >> t; while(t--)
    {
        int a,b,x,y;
        cin >>a >>b >>x >>y;
        
        int ans = 0;
        ans += 2 * f(a, x, b, y);
        ans += 2 * f(a, y, b, x);

        cout << ans  << endl;
    }
}