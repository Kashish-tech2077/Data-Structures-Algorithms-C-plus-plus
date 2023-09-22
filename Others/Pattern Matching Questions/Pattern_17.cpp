#include <iostream>
using namespace std;

// Output A 
//        B C
//        D E F
//        G H I J
//        K L M N O
//        P Q R S T U

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    char ch = 'A';
    while(row <= n){
        int column = 1;
        while (column <= row){
            cout << ch << " ";
            ch = ch + 1;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}