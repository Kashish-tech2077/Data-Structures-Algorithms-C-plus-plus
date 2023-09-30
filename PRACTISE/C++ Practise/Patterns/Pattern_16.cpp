#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 16
    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
           cout << "  ";
        }
        // Star(*) Print
        for(col = 1; col <= row; col++){
            cout << " *";
        }
        cout << endl;
    }
}