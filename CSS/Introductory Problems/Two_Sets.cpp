#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long tot = 1LL*(n+1)*n/2, ai, bi;  // 1LL promotes all terms to long long
    ai = bi = tot / 2;

    if (tot & 1) cout << "NO\n";
    else {
        cout << "YES\n";

        vector <int> a, b;  // set insertion : O(log N), vector -> O(1) push_back()

        while (ai or bi) {
            if (ai >= bi) {
                ai -= n;
                a.push_back(n--);
            } else {
                bi -= n;
                b.push_back(n--);
            }
        }
        cout << a.size() << endl;
        for(auto it : a) cout << it << " "; cout << endl;
        cout << b.size() << endl;
        for(auto it : b) cout << it << " "; cout << endl;


    }

    return 0;
    
}