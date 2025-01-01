#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int n = s.size();
    int odd = n & 1;

    map<char, int> mp;
    for(char c : s) mp[c]++;

    string pre, mid;
    for(auto& [c, k] : mp) {
        if (k & 1){
            odd--;
            mid = c;
        }
        pre += string(k/2, c);
    }


    if (odd) {
        cout << "NO SOLUTION\n";
    } else {
        string post = pre;
        reverse(post.begin(), post.end());
        
        cout << pre << mid << post << endl;
    }

    return 0;


}