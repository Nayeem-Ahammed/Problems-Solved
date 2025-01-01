#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll gcdv(ll a, ll b)
{
    for (ll r = a % b; r; a = b, b = r, r = a % b)
        ;
    return b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll s = a + b + c;
        ll n = s * (s - (2 * a)) * (s - (2 * b)) * (s - (2 * c));
        ll d = 4 * s * s;
        ll gc = gcdv(n, d);
        cout << n / gc << "/" << d / gc << endl;
    }
    return 0;
}