#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * * * *

    int row, col;
    for(row = 1; row <= 6; row++)
    {
        for(col = 1; col <= row; col++) //col is DEPENDENT on the row.
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}