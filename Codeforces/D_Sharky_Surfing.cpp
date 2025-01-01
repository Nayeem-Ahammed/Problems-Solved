#include <bits/stdc++.h>
using namespace std;

void VAL_er_CODE()
{
    int n, m, L; cin >> n >> m >> L;
    vector <pair<int, int>> vp;
    // ascending order
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 
    priority_queue<int> pqq; // desecndig order

    while(n--){
        int a, b; cin >> a >> b;
        vp.emplace_back(a, b);
    }
    while(m--){
        int pos, val;
        cin >> pos >> val;
        pq.emplace(pos, val);
    }
    
    int k = 1, ans = 0;
    for(auto i : vp) {
        int val = i.second - i.first + 2;

        while(!pq.empty() and pq.top().first < i.first)
        {
            pqq.push(pq.top().second);
            pq.pop();
        }

        while(val > k and !pqq.empty()){
            k += pqq.top();
            pqq.pop();
            ans++;
        }

        if(val > k){
            ans = -1;
            break;
        }
    }

    cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1, heda = 1; cin >> t;
    while (t--)  VAL_er_CODE();
    return heda ^ heda;
}
