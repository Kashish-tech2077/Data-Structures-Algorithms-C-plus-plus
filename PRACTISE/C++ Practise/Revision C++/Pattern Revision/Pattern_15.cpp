#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    // a
    // b b
    // c c c
    // d d d d
    // e e e e e
    // f f f f f f
    // g g g g g g g

    int row, col;
    for(row = 1; row <= 7; row++)
    {
        char name = 'a' + (row-1); //Increasing the 'name' according to the row.
        for(col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}