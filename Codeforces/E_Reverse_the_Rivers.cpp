#include <bits/stdc++.h>
using namespace std;

void printSpace(int level) {
    for(int i = 0; i < 2*level; i++){
        cout << "   ";
    }
}
void printAns(int level, char a, char b){
    for(int i = 0; i < level; i++){
        cout <<"---";
    }
    cout <<' ' <<a <<"--->" <<b << '\n';
}
void TowerOfHanoi(int n, char a, char b, char c, int level) 
{
    if(n == 0) return;
    TowerOfHanoi(n-1, a, c, b, level+1);
    
    printSpace(level+1);
    cout <<"T( " << n <<' ' << a <<' ' <<b <<' ' <<c <<" )";
    printAns(n-level+5, a, c);

    TowerOfHanoi(n-1, b, a, c, level+1);
}
int main()
{
    int n = 6; // cin >> n;
    char a = 'A', b = 'B', c = 'C';
    TowerOfHanoi(n, a, b, c, 0);

}