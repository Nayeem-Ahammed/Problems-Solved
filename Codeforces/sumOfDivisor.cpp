#include <bits/stdc++.h>
using namespace std;
void sumOfDivisorsPairs(int n){
    vector <long long> div(n+1, 0);
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){
            div[j] += i;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << i <<" : " << div[i] << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    sumOfDivisorsPairs(n);

    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (n/i)*i;
    }
    cout << sum  << endl;
}