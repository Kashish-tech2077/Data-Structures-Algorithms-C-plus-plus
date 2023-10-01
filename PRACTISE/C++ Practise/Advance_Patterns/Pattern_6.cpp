#include <iostream>
using namespace std;

int main(){
    // Advance Pattern- 6 Practise -----DIAMOND PATTERN-----
    //             *
    //           *   *
    //         *   *   *
    //       *   *   *   *
    //     *   *   *   *   *
    //   *   *   *   *   *   *
    //     *   *   *   *   *
    //       *   *   *   *
    //         *   *   *
    //           *   *
    //             *

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    // Upper First Half Pattern
    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << " ";
        }
        // Star(*) Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    // Second Lower Half Pattern
    for(row = n; row >= 1; row--){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << " ";
        }
        // Star(*) Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}