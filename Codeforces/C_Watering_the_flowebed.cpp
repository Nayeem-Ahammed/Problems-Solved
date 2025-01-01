#include<bits/stdc++.h>
using namespace std;

#define fast               ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes                cout<<'YES'<<endl;
#define no                 cout<<'NO'<<endl;
#define test               int t; cin>>t; while(t--)
#define vi                 vector<ll>
#define vs                 vector<string>
#define all(v)                v.begin(), v.end()
#define pb                 push_back
#define new           cout << endl;
#define cin(a)         for(int i=0; i<n; i++) cin >> a[i];
typedef long long          ll;
typedef long double         ld;

void solve()
{
    int t;
    cin >> t;

    for(int j=1; j<=t; j++)
    {
        int n, k;
        cin >> n >> k;

        vi x(n), y(n);
        for(int i=0; i<n; i++)
        {
            cin >> x[i] >> y[i];
        }

        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            ans += k / x[i];
        }

        cout << "Case " << j << ": " << ans << endl;
    }
}
int main ()
{
    fast
    solve();
    
    
    return 0;
}