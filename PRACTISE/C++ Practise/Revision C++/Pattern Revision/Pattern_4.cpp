#include <iostream>
using namespace std;

int main()
{
    // Pattern Priting 4.

    int row, col;

    for(row = 1; row <= 5; row++)
    {
        for(col = 5; col >= 1; col--) //Printing col in reverse order.
        {
            cout << col <<" ";
        }
        cout << endl;
    }
    return 0;
}