#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    // F G H I J K
    // F G H I J K
    // F G H I J K
    // F G H I J K
    // F G H I J K

    int row, col;

    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= 6; col++)
        {
            char name = 'F'+(col-1);  //Initialising the name variable with increment according to the col.
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}