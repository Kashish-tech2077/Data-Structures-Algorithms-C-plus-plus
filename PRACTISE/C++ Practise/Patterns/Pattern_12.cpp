#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 12
    // * * * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n-(row-1); col++){
           cout << "*" << " ";
        }
        cout << endl;
    }
}