#include <iostream>
using namespace std;

int main()
{
    // Pattern to be printed.
    // * * * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n; //Input the value of n by the User.
    for(row = n; row >= 1; row--)  //Looping the row in decreament form.
    {
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}