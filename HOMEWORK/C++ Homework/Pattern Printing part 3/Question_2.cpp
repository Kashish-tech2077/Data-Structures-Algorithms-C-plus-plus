#include <iostream>
using namespace std;

int main()
{
    // HomeWork Question- 2:
    //            A
    //          B B
    //        C C C
    //      D D D D
    //    E E E E E

    int row, col, n;
    char ch;

    cout << "Enter the value of n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Printing
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Character Printing
        for(col = 1; col <= row; col++){
            ch = 'A'+ (row-1);
            cout << ch << " ";
        }
        cout << endl;
    }

}