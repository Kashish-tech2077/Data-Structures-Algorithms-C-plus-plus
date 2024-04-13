#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1
    // 6 5 4 3 2 1

    int row, col, n;
    cout << "Enter the n: "; //Input the value of n by USER.
    cin >> n;
    for(row = 1; row <= n; row++)
    {
        for(col = row; col >= 1; col--) //col is DEPENDENT on the row.
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}