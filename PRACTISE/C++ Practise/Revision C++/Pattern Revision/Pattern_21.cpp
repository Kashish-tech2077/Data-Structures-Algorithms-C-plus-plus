#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed.
    //           1
    //         1 2
    //       1 2 3
    //     1 2 3 4
    //   1 2 3 4 5
    // 1 2 3 4 5 6

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        // Space Print
        for(col = 1; col <= (n-row); col++)
        cout << "  ";

        // Number Print
        for(col = 1; col <= row; col++)
        cout << col << " ";

        cout << endl;
    }
    return 0;
}