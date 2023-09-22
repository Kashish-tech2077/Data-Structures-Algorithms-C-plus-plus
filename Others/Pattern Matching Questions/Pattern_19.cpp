#include <iostream>
using namespace std;

// Output E
//        D E
//        C D E
//        B C D E
//        A B C D E


int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    while(row <= n){
        int column = 1;
        char ch = 'A' + n - row;
        while(column <= row){
            cout << ch << " ";
            ch = ch + 1;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }

}