#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 7
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * * * *

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= row; col++){
           cout << "* ";
        }
        cout << endl;
    }
}