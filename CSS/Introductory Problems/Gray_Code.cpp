/*
    Binary to Garay code
    1. record the MSB
    2. Add MSB to the next bit of Binary code, record the sum and neglect the carry
    3. Repeat the process
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for(int i = 0; i < pow(2, n); i++) {
        bitset <16> b(i);
        string bit = b.to_string().substr(16 - n); // extract a substring starting at the start_position.
        string ans; ans += bit[0];

        for(int j=1; j < n; j++) ans += (bit[j] == bit[j-1]) ? '0' : '1';
        cout << ans <<endl;
    }
    
}