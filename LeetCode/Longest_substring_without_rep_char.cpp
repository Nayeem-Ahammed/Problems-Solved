// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, n = s.size(), mx = 0;
        vector<int> hash(257, -1);

        while(r < n){
            if(hash[s[r]] >= l) l = hash[s[r]]+1;
            hash[s[r]] = r;
            mx = max(mx, r-l+1);
            r++;
        }
        
        return mx;
    }
};
int32_t main()
{
    ios_base::sync_with_stdio (false);
    cin.tie(nullptr);

    string s; 
    getline(cin, s);

    Solution nayeem;
    cout << nayeem.lengthOfLongestSubstring(s);
}