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
        
        string vowel, consonant;
        for(auto & u : a){
            for(auto i = u.begin(); i != u.end(); i++){
                if(*i=='a'||*i=='e'||*i=='i'||*i=='o'||*i=='u')
                    vowel += *i;
                else consonant += *i;
            }
        }
        
        cout << vowel << endl; 
        cout << consonant << endl;
    }
}