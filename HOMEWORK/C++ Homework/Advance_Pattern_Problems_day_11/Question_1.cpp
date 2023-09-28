#include <iostream>
using namespace std;

int main(){
    // HomeWork Question No- 1 Take an input n from the user, and create a pattern like below, for n=5, we have output like this.x 
    //         *
    //       *   *
    //     *   *   *
    //   *   *   *   *
    // *   *   *   *   *

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << " ";
        }
        // Star Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}