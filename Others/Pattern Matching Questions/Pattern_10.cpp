#include <iostream>
using namespace std;

// Output 1 (Without Using another variable like 'value')
//        2 3
//        3 4 5
//        4 5 6 7 
//        5 6 7 8 9
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int row = 1;
    while (row <= n) {
        int column = 1;

        while (column <= row) {
            cout << row + column - 1 << " ";
            column++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
