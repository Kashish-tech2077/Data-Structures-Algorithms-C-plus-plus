#include <iostream>
using namespace std;

// Output A 
//        B C
//        C D E
//        D E F G
//        E F G H I
//        F G H I J K

int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    while(row <= n){
        int column = 1;
        while(column <= row){
            char ch = 'A' + row + column - 2;
            cout << ch << " ";
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}