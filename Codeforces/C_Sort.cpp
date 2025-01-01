#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while (t--) {
        int n, q; cin >> n >> q;
        string a, b; cin >> a >> b;
        while(q--){
            int l, r; cin >> l >> r;
            int cnt = 0, sz = r-l+1;
            string x = a.substr(l-1, sz);
            string y = b.substr(l-1, sz);
            sort(x.rbegin(), x.rend());
            sort(y.rbegin(), y.rend());
            // cout << x <<  ' ' << y << endl;
            for(int i = 0, j = 0; i < sz and j < sz; ){
                
                if(x[i] == y[j]){
                    cnt++; i++; j++;
                }
                else if (x[i] > y[j]) i++;
                else j++;
            }
            // priority_queue <char> sa, sb;
            // for(int i = l-1; i < r; i++){
            //     sa.push(a[i]);
            //     sb.push(b[i]);
            // }

            // int same = 0;
            // while (!sa.empty() and !sb.empty()){
            //     if (sa.top() > sb.top()) sa.pop();
            //     else if (sa.top() < sb.top()) sb.pop();
            //     else {
            //         same++; sa.pop(); sb.pop();
            //     }
            // }
            
            cout << sz - cnt  << endl;
        }
    }
    return 0;
}