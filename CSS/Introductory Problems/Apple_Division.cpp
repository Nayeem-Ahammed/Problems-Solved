#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll minDiff(vector <ll> &a, size_t i, ll curSum, ll tot) {
    if (i == a.size()) {
        ll rem = tot - curSum;
        return abs(curSum - rem);
    }

    ll include = minDiff(a, i+1, curSum+a[i], tot);
    ll exclude = minDiff(a, i+1, curSum, tot);

    return min(include, exclude);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    vector <ll> p(n);
    for(auto &i : p) cin >> i;
    ll tot = accumulate(p.begin(), p.end(), 0LL);
    
    // using recursion
    cout << minDiff (p, 0LL, 0LL, tot) << endl;


    return 0;
}