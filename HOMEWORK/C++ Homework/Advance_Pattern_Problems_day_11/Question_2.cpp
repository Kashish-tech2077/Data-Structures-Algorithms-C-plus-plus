#include <iostream>
using namespace std;

int main(){
    // HomeWork Question No- 2 Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
    //         1
//           1 2 3
//         1 2 3 4 5
//       1 2 3 4 5 6 7
//     1 2 3 4 5 6 7 8 9

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Number Print
        for(col = 1; col <= (2*row)-1; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}