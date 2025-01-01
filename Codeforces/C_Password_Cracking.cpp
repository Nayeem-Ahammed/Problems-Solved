#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool quiry(string s){
    cout << "? " << s << endl;
    int x; cin >> x;
    return x;
}
void solve(){
    int n; cin >> n;
    bool flag = false;
    string pass = "";

    while (pass.size() < n){
        if(!flag) {
            pass += '0';
            if(!quiry(pass)){
                pass.pop_back();
                pass += '1';

                if(pass.size() > 1 and !quiry(pass)) {
                    flag = true;
                    pass.pop_back();
                }
            }
        }
        else {
            pass = '0' + pass;
            if (!quiry(pass)) pass = '1' + pass.substr(1);
        }
    }

    cout << "! " << pass <<endl;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);   
    ll t; cin >> t;
    while (t--) solve();
    return 0;
    while (t--) {

        int n; cin >> n;

        auto qur = [](const string s) {
            cout << "? " << s << endl;
            cout.flush();
            int res; cin >> res;
            return res;
        };
        string pass;

        if(qur("1")) pass = "1";
        else pass = "0";

        while(pass.size() < n) {
            if(qur(pass + '0')) pass += '0';
            else if (qur(pass + '1')) pass += '1';
            else break;
        }
        while(pass.size() < n){
            if(qur('0' + pass)) pass = '0' + pass;
            else pass = '1' + pass;
        }

        cout << "! " << pass << endl;
        cout.flush();
        
                
    }

    return 0;
} 