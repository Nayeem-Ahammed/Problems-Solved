#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vector <string> a(n);
        for(int i = 0; i < n; i++){
            string x; cin >> x;
            a[i] = x;
        }

        // check all layers
        int left = 0, right = m-1,
        top = 0, bottom = n-1, ans = 0;

        while(left <= right and top <= bottom)
        {
            string s = "";
            for(int i = left; i <= right; i++)
                s += a[top][i];
            top++;

            for(int i = top; i <= bottom; i++)
                s += a[i][right];
            right--;

            if(left <= right) {
                for(int i = right; i >=left; i--)
                    s += a[bottom][i];
                bottom--;
            }

            if(top <= bottom) {
                for(int i = bottom; i >= top; i--)
                    s += a[i][left];
                left++;
            }

            s += s.substr(0, 3);

            // cout << s << '\n';

            // count number of substring
            for(int i = 0; i+3 <= s.size(); i++){
                if(s.substr(i, 4) == "1543")
                    ans++;
            }
        }
        cout << ans <<'\n';
    }
}