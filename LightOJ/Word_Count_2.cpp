#include <bits/stdc++.h>
using namespace std;

bool isDelimiter(char ch){
    return (ch==' '|| ch==','||ch=='.'||ch=='!'||ch=='?'||ch==':'||ch=='-');
}
int count_word(string s){
    // Replace all delimiters with spaces
    for(auto &ch : s) if(isDelimiter(ch)) ch = ' ';

    // Use stringstream to split the string into words
    stringstream ss(s);
    string w;
    int cnt = 0;
    while(ss >> w) cnt++;
    
    return cnt;

}
int main()
{
    int tc; cin >> tc;
    cin.ignore(); // Ignore the newline char afer reading tc

    while(tc--){
        string s;
        getline(cin, s);

        int word = count_word(s);
        cout << "Count = " << word << endl;
    }
}