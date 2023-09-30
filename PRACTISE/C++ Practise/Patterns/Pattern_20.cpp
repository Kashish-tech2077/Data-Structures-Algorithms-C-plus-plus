#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 20
    //         A
    //       A B
    //     A B C
    //   A B C D
    // A B C D E

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
        for(ch = 'A'; ch <= 'A'+ (row-1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}