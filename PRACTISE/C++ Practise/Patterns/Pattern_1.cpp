#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 1
    // * * * * * * *
    // * * * * * * *
    // * * * * * * *
    // * * * * * * *
    // * * * * * * *

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            cout << "* ";
        }
        cout << endl;
    }
}