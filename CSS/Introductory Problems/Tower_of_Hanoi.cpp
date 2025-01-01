#include <bits/stdc++.h>
using namespace std;

vector <pair <int, int>> v;
void TowerOfHanoi (int n, int a, int mid, int b) {
    if (n == 1){
        // cout << a << " " << b << endl;
        v.push_back(make_pair(a, b));
        return;
    }
    TowerOfHanoi (n-1, a, b, mid);
    // cout << a <<' ' << b << endl;
    v.push_back(make_pair(a, b));
    TowerOfHanoi (n-1, mid, a , b);
}

int main()  
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    TowerOfHanoi (n, 1, 2, 3);
    cout << v.size() << endl;
    for(auto it : v) {
        cout << it.first << ' ' << it.second << endl;
    }
}