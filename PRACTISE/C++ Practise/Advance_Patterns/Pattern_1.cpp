#include <iostream>
using namespace std;

int main(){
    // Advance Pattern- 1 Practise
    //             *
    //           * * *
    //         * * * * *
    //       * * * * * * *
    //     * * * * * * * * *
    //   * * * * * * * * * * *

    int row, col, n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(row= 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Star(*) Print
        for(col = 1; col <= (row*2)-1; col++){
            cout << "* ";
        }
        cout << endl;
    }
}