#include <iostream>
using namespace std;

int main()
{
    // Pyramid Pattern Print.

    int row, col,n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        // Space Print.
        for(col = 1; col <= (n-row); col++)
        cout << "  ";

        // Star(*) Print.
        for(col = 1; col <= (2*row)-1; col++)
        cout << "* ";

        cout << endl;
    }
    return 0;
}