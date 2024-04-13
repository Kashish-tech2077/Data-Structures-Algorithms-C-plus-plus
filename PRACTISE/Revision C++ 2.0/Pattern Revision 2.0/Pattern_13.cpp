#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    // 6 6 6 6 6 6

    int row, col, n;
    cout << "Enter the n: "; //Input the value of n by USER.
    cin >> n;
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++) //col is DEPENDENT on the row.
        {
            cout << row << " ";
        }
        cout << endl;
    }

    return 0;
}