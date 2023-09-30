#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 17
    //         1
    //       2 2
    //     3 3 3
    //   4 4 4 4
    // 5 5 5 5 5

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
           cout << "  ";
        }
        // Number Print
        for(col = 1; col <= row; col++){
            cout << row << " ";
        }
        cout << endl;
    }
}