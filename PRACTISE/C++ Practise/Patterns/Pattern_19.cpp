#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 19
    //         A
    //       B B
    //     C C C
    //   D D D D
    // E E E E E

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;
    char ch;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
           cout << "  ";
        }
        // Character Print
        ch = 'A'+ (row-1);
        for(col = 1; col <= row; col++){
            cout << ch << " ";
        }
        cout << endl;
    }
}