#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    vector <ll> a;
    for(int i = 1; i <= 5; i++){
        string s (i, '4');
        s += string(i, '7');
        // cout << s << endl;

        do{
            a.push_back(stoll(s));
        } while(next_permutation(s.begin(), s.end()));
    }

    ll n; cin >> n;
    cout << *lower_bound(a.begin(), a.end(), n) <<endl;
    
    return 0;
}