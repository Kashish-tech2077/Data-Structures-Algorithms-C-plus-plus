#include <iostream>
using namespace std;

int main()
{
    // Pattern Printing 6.

    int row, col;

    for (row = 1; row <= 10; row++)
    {
        char name = 'a' + (row - 1); // Printing the alphabet in row
        for (col = 1; col <= 10; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}