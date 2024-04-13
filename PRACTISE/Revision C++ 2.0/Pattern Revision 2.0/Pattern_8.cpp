#include <iostream>
using namespace std;

int main()
{
    // Printing Increasing Numeric pattern.

    int row, col, count = 1;
    for(row = 1; row <= 10; row++)
    {
        for(col = 1; col <= 10; col ++)
        {
            cout << count << " ";
            count = count + 1;   //Increasing the count one by one.
        }
        cout << endl;
    }
    return 0;
}