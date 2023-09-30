#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 8
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // 1 2 3 4 5 6

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= row; col++){
           cout << col << " ";
        }
        cout << endl;
    }
}