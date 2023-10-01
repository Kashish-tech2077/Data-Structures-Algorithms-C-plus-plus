#include <iostream>
using namespace std;

int main(){
    // Advance Pattern- 7 Practise
    //             1
    //           1 2 3
    //         1 2 3 4 5
    //       1 2 3 4 5 6 7
    //     1 2 3 4 5 6 7 8 9
    //   1 2 3 4 5 6 7 8 9 10 11

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Number Print
        for(col = 1; col <= (row*2)-1; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}