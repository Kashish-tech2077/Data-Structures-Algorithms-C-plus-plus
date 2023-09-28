#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed Diamond Shape
    //       *
    //     *   *
    //   *   *   *
    // *   *   *   *
    // *   *   *   *
    //   *   *   *
    //     *   *
    //       *

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    // First upper half pattern
    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << " ";
        }
        // Star Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    // Second lower half pattern
    for(row = n; row >= 1; row--){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << " ";
        }
        // Star Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}