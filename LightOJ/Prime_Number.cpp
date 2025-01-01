#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
bool isPrime[N];

void declare_prime(){
    fill(isPrime, isPrime+N, true); // Initially all is true
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i*i < N; i++){
        if(isPrime[i]){
            for(int j = i*i; j < N; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    declare_prime();

    int tc = 1;
    cin >> tc;

    while(tc--){
        int a, b;
        cin >> a >> b;

        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(isPrime[i])
                cnt++;
        }

        cout << cnt << endl;
    }
}