#include <bits/stdc++.h>
using namespace std;

int check(int a, int b) {
    printf("? %d %d\n", a, b);
    fflush(stdout);
    int z;
    scanf("%d", &z);
    return z;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n;
    scanf("%d", &n);
    vector <int> v(n+1, 0);

    int mx = 1;
    for(int i = 2; i <= n; i++) {
        int a = check(mx, i);
        int b = check(i, mx);

        if(a > b){
            v[mx] = a;
            mx = i;
        } else{
            v[i] = b;
        }
    }
    v[mx] = n;


    printf("! ");
    for(int i = 1; i <= n; i++)
        printf("%d ", v[i]);
    printf("\n");
    fflush(stdout);

    return 0;
}