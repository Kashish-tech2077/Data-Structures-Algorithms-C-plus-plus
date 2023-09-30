#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 4
    // a a a a a
    // b b b b b 
    // c c c c c 
    // d d d d d 
    // e e e e e 

    int row, col, n;
    char ch;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        ch = 'a'+(row-1);
        for(col = 1; col <= n; col++){
            cout << ch << " ";
        }
        cout << endl;
    }
}