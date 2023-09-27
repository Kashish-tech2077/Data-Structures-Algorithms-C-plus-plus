#include <iostream>
using namespace std;

int main()
{
    // HomeWork Question- 1:
    //            1
    //          2 1
    //        3 2 1
    //      4 3 2 1
    //    5 4 3 2 1

    int row, col, n;

    cout << "Enter the value of n: ";
    cin >> n;

    for(row =1; row <= n; row++){
        // space printing
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Number Printing
        for(col = row; col >= 1; col--){
            cout << col << " ";
        }
        cout << endl;
    }

}