#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> a;

        while(ss >> word) a.push_back(word);

        for(auto &u : a){
            reverse(u.begin(), u.end());
            cout << u << " ";
        }
        cout << endl;
    }
}