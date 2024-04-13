#include <iostream>
using namespace std;

int main()
{
    // Printing Ascending Alphabet pattern.

    int row, col;
    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= 5; col ++)
        {
            char name = 'a' + (col-1);
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}