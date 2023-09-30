#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 11
    // a
    // b b
    // c c c
    // d d d d
    // e e e e e
    // f f f f f f

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;
    char ch;

    for(row = 1; row <= n; row++){
        ch = 'a'+ (row-1);
        for(col = 1; col <= row; col++){
           cout << ch << " ";
        }
        cout << endl;
    }
}