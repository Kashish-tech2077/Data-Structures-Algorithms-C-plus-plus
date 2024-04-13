#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = n; row >= 1; row--) //Looping the row in decreament form.
    {
        for(col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    // 2nd Method
    // for(row = 1; row <= n; row++)
    // {
    //     for(col = 1; col <= n - (row-1); col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}