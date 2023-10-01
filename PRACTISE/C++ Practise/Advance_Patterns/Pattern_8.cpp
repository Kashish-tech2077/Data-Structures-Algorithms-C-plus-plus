#include <iostream>
using namespace std;

int main(){
    // Advance Pattern- 8 Practise
    //         A
    //       A B A
    //     A B C B A
    //   A B C D C B A
    // A B C D E D C B A

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
        for(ch = 'A'; ch <= 'A'+(row-1); ch++){
            cout << ch << " ";
        }
        // Character Reverse Print
        for(ch = 'A'+(row-1)-1; ch >= 'A'; ch--){
            cout << ch << " ";
        }
        cout << endl;
    }
}