#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;
    vector <int> v(n);
    for(auto &e : v) cin >> e;

    long long sum = 0, mxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += v[i];
        mxSum = max(mxSum, sum);
        
        if(sum < 0) sum = 0;
    }

    cout << mxSum <<'\n';
    return 0;
}