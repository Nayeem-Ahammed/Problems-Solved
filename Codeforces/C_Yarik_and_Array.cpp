#include <bits/stdc++.h>
using namespace std;

// 
int MaxSubarraySum(vector <int> &a, int i, int n){
    int sum = 0, mx = a[i];
    for(int k = i; k <= n; k++){
        sum += a[k];
        mx = max(mx, sum);
        if(sum < 0) sum = 0;
    }
    return mx;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while (t--)
    {
        int n; cin >> n;
        vector <int> a(n);
        for(auto &e : a) cin >> e;

        int start = 0, ans = INT_MIN;
        for(int i = 0; i < n-1; i++){
            if((a[i] + a[i+1]) % 2 == 0){
                int sum = MaxSubarraySum(a, start, i);
                ans = max(ans, sum);
                start = i+1;
            }
        }

        ans = max(ans, MaxSubarraySum(a, start, n-1));
        cout << ans <<'\n';
    }
    return 0;
}