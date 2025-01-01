#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, i, Total_combination, attacking_knights;

    cin >> n;
    for(i = 1; i <= n; i++) {
        Total_combination = (i*i) * (i*i - 1) / 2; // xC2 , where x = i*i
        attacking_knights = 4 * (i-1)*(i-2); // 3|2 grid -> find it
        cout << Total_combination - attacking_knights << endl;
    }

    return 0;
}