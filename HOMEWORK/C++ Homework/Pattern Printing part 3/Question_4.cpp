#include <iostream>
using namespace std;

int main(){
    // HomeWork Question No- 4
    //         E
    //       E D
    //     E D C
    //   E D C B
    // E D C B A

    int row, col, n;
    cout << "Enter the value of n: ";
    cin >> n;
    char ch;

    for(row = 1; row <= n; row++){
        // Space Printing
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Number Printing
        for(ch = 'E'; ch >= 'E'-(row-1); ch--){
            cout << ch << " ";
        }
        cout << endl;
    }
}