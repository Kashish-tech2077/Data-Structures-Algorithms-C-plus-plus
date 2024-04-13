#include <iostream>
using namespace std;

int main()
{
    // Pattern Priting 5.

    int row, col;

    for(row = 1; row <= 8; row++)
    {
        for(col = 8; col >= 1; col--) //Printing col in reverse order.
        {
            cout << col*col <<" ";  //Printing the square of col.
        }
        cout << endl;
    }
    return 0;
}