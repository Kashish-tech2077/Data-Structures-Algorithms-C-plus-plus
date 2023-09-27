#include <iostream>
using namespace std;

int main()
{
    // HomeWork Question- 2:
    //            5
    //          5 4
    //        5 4 3
    //      5 4 3 2 
    //    5 4 3 2 1

    int row, col, n;
    char ch;

    cout << "Enter the value of n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Printing
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Number Printing
        for(col = 5; col >= n-(row-1); col--){
            cout << col << " ";
        }
        cout << endl;
    }

}