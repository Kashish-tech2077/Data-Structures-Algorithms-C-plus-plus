#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed.
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    // Print ABOVE Half Pattern
    for(row = n; row >= 1; row--){
        // Star Print
        for(col = 1; col <= row; col++)
        cout << "*" << " ";

        // Space Print
        for(col = 1; col <= (2*n)-(2*row); col++)
        cout << "  ";

        // Star Print
        for(col = 1; col <= row; col++)
        cout << "*" << " ";

        cout << endl;
    }

    // Print BELOW Half Pattern
    for(row = 1; row <= n; row++){
        // Star Print
        for(col = 1; col <= row; col++)
        cout << "*" << " ";

        // Space Print
        for(col = 1; col <= (2*n)-(2*row); col++)
        cout << "  ";

        // Star Print
        for(col = 1; col <= row; col++)
        cout << "*" << " ";

        cout << endl;
    }
}