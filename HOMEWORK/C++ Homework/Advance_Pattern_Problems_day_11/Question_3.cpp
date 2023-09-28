#include <iostream>
using namespace std;

int main(){
    // HomeWork Question No- 3 Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//             A
//           A B A
//         A B C B A
//       A B C D C B A
//     A B C D E D C B A

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;
    char ch;

    for(row = 1; row <= n; row++){
        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Alphabet increasing order Print
        for(ch = 'A'; ch <= 'A'+ (row-1); ch++){
            cout << ch << " ";
        }
        // Alphabet decreasing order print
        for(ch = 'A'+ (row-1) - 1; ch >= 'A'; ch--){
            cout << ch << " ";
        }
        cout << endl;
    }
}