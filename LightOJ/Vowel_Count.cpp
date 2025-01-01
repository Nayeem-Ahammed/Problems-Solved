#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        
         // split word
        string w;    
        stringstream ss(s);
        vector<string> a;
        while(ss >> w){
            a.push_back(w);
        }
        
        long long cnt = 0;
        for(auto & u : a){
            // using Lamda Function
            cnt += count_if(all(u), [](char i){ return (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'); });
        }
        
        cout <<"Number of vowels = " << cnt << endl;
    }
}