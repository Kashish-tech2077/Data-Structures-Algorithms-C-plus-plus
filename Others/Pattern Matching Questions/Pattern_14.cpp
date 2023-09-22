#include <iostream>
using namespace std;

// Output A B C D
//        E F G H
//        I J K L
//        M N O P
//        Q R S T
int main(){
    int n ;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    char value = 'A';
    while(row <= n){
        int column = 1;
        while(column <= n){
            // char ch = 'A' + column - 1;
            cout << value << " ";
            value = value + 1;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}