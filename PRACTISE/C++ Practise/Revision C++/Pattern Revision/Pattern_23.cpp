#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed.
    //          1
    //        2 1
    //      3 2 1
    //    4 3 2 1
    //  5 4 3 2 1

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        // Space Print
        for(col = 1; col <= (n-row); col++)
        cout << "  ";

        // Number Print
        for(col = row; col >= 1; col--)
        cout << col << " ";

        cout << endl;
    }
    return 0;
}