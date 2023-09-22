#include <iostream>
using namespace std;

// Output  1 1 1 1 1  
//           2 2 2 2
//             3 3 3   
//               4 4
//                 5

int main(void){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    while(row <= n){
        int space = n - row + 1;
        while(space){
            cout << "  ";
            space = space - 1;
        }
        int col = 1;
        int num = n - row + 1;
        while(col <= num){
            cout << num << " ";
            num = num + 1;
            col = col + n;
        }
        cout << endl;
        row = row + 1;
    }
}