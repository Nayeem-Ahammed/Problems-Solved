#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s.reserve(1e18);
    for(int i = 1; i <= 1e5; i++) s += to_string(i);
    //  string s = "12345678910111213141516171819202122232425";
    for(int i = 0; i <= s.size(); i++){
        cout << i+1 << " -> " << s[i] << endl;
    }

    return 0;

    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
    }
}