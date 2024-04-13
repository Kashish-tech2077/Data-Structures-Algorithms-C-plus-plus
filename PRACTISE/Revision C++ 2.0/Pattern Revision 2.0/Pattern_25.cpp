#include <iostream>
using namespace std;

int main()
{
    // Pyramid Number Pattern print.
    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        // Space Print.
        for(col = 1; col <= (n-row); col++)
        cout << "  ";

        // Increasing Order Number Print.
        for(col = 1; col <= row; col++)
        cout << col << " ";

        // Decreasing Order Number Print.
        for(col = row-1; col >= 1; col--)
        cout << col << " ";

        cout << endl;
    }
    return 0;
}