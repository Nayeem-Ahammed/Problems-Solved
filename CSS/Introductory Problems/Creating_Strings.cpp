#include <bits/stdc++.h>
using namespace std;

void permute (string s, int l, int r, set <string> &st) {
    if (l == r) st.insert(s);
    else {
        for(int i = l; i <= r; i++){
            swap (s[l], s[i]); // swap current index with the strting index.
            permute (s, l+1, r, st); // Recurse for the next level
            swap (s[l], s[i]); // Backtrack (undo the swap)
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    set <string> st;

    // permute(s, 0, s.size()-1, st);

    sort(s.begin(), s.end());   // Must be needed to sort
    do {
        st.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << st.size() << endl;
    for(auto &a : st) cout << a << endl;
}