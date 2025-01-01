#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tc; cin >> tc; while(tc--)
    {
        int n; cin >> n;
        auto ask = [](int a, int b){
            cout <<"? " <<a <<' ' <<b <<endl;
            fflush(stdout);

            int z; cin >> z;
            return z;
        };

        bool no = true;
        int i = 1, x;
        while(i < n){
            if((x = ask(1, i+1)) != 0){
                no = false;
                break;
            }

            i++;
        }

        if(no){
            cout <<"! IMPOSSIBLE" <<endl;
            continue;
        }

        
        string s;
        s += string(i-x, '1') + string(x, '0') + '1';
        i++;

        // we find 1 to i --> x
        while(i < n) {
            int y = ask(1, i+1);
            if(x == y) s += '0';
            else s += '1';

            x = y;
            i++;
        }

        cout << "! " << s << endl;
    }
}