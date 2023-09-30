#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 2
    // 1 1 1 1 1 1
    // 2 2 2 2 2 2
    // 3 3 3 3 3 3
    // 4 4 4 4 4 4
    // 5 5 5 5 5 5
    // 6 6 6 6 6 6

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            cout << row << " ";
        }
        cout << endl;
    }
}