#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    //            *
    //          * *
    //        * * *
    //      * * * *
    //    * * * * *
    //  * * * * * *
    
    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        // Print Space.
        for(col = 1; col <= (n-row); col++)
        cout << "  ";

        // Print Star.
        for(col = 1; col <= row; col++)
        cout << "* ";
        
        cout << endl;
    }

    return 0;
}