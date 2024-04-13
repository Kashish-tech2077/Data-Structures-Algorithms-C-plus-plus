#include <iostream>
using namespace std;

int main()
{
    // Pattern Printing 3.

    int row, col, row_n, col_n;
    cout << "Enter the row: ";  //Taking the row input
    cin >> row_n;
    cout << "Enter the col: ";  //Taking the column input
    cin >> col_n;

    for(row = 1; row <= row_n; row++)
    {
        for(col = 1; col <= col_n; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}