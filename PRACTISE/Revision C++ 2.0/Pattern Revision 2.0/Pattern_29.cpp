#include <iostream>
using namespace std;

int main()
{
    // DIAMOND Pattern Print.
    //       * 
    //     *   *
    //   *   *   *
    // *   *   *   *
    // *   *   *   *
    //   *   *   *
    //     *   *
    //       * 

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    // First ABOVE Half Pattern
    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++)
        cout << " ";

        // Star Print
        for(col = 1; col <= row; col++)
        cout << "*" << " ";

        cout << endl;
    }

    // BELOW Half Pattern
    for(row = n; row >= 1; row--){
        // Space Print
        for(col = 1; col <= (n-row); col++)
        cout << " ";

        // Star Print
        for(col = 1; col <= row; col++)
        cout << "*" << " ";

        cout << endl;
    }
}