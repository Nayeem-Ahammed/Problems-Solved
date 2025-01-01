#include <bits/stdc++.h>    // Nayeem_Ahammed
using namespace std;
using ll = long long;

ll BinarySearch(const vector<ll> &a, ll n, ll val) {
    ll l = 0, h = n-1;
    ll res = -1;
    while(l <= h) {
        ll mid = l + (h - l) /2;

        if(a[mid] == val){
            res = mid;
            h = mid - 1;
        }
        else if (a[mid] < val) l = mid + 1;
        else h = mid -1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n, q; cin >> n >> q;
    vector <ll> a(n);
    for(auto &e : a) cin >> e;
    sort(a.begin(), a.end());  

    while (q--) {
        ll val; cin >> val;
        cout << BinarySearch(a, n, val) <<'\n';
    }  
    return 0;
}