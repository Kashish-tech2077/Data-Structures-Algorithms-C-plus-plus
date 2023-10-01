#include <iostream>
using namespace std;

int main(){
    // Advance Pattern- 5 Practise -----BUTTERFLY PATTERN-----
    //   *                     *
    //   * *                 * *
    //   * * *             * * *
    //   * * * *         * * * *
    //   * * * * *     * * * * *
    //   * * * * * * * * * * * *
    //   * * * * *     * * * * *
    //   * * * *         * * * *
    //   * * *             * * *
    //   * *                 * *
    //   *                     *

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    // Upper First Half Pattern
    for(row = 1; row <= n; row++){
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        for(col = 1; col <= (2*n)-(2*row); col++){
            cout << "  ";
        }
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    // Lower Half Pattern
    for(row = n-1; row >= 1; row--){
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        for(col = 1; col <= (2*n)-(2*row); col++){
            cout << "  ";
        }
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}