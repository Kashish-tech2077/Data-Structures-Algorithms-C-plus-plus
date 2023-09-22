#include <iostream>
using namespace std;

// Output E
//        D D
//        C C C
//        B B B B
//        A A A A A


int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    while (row <= n){
        int column = 1;
        while (column <= row){
            char ch = 'A' + n - row;
            cout << ch << " ";
            ch = ch + 1;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}