#include <iostream>
using namespace std;

int main()
{
    // Pattern to be Printed
    //           A
    //         A B
    //       A B C
    //     A B C D
    //   A B C D E
    // A B C D E F

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;  //INPUT by the User.

    for(row = 1; row <= n; row++)
    {
        // Space Print
        for(col = 1; col <= (n-row); col++)
        cout << "  ";

        // Alphabet Print
        for(char name = 'A'; name <= 'A'+(row-1); name++)
        cout << name << " ";

        cout << endl;
    }
    return 0;
}