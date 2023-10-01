#include <iostream>
using namespace std;

int main(){
    // Advance Pattern- 2 Practise
    //             1
    //           1 2 1
    //         1 2 3 2 1
    //       1 2 3 4 3 2 1
    //     1 2 3 4 5 4 3 2 1
    //   1 2 3 4 5 6 5 4 3 2 1

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Number Print
        for(col = 1; col <= row; col++){
            cout << col << " ";
        }
        // Reverse Number Print
        for(col = row-1; col >= 1; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}