#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed:
    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    int row, col, n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Method- 1
    for(row = n; row >= 1; row--)
    {
        for(col = n; col >= row; col --)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    // Method- 2
    // for(row = 1; row <= n; row++)
    // {
    //     for(col = n; col >= n - (row-1); col --)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}