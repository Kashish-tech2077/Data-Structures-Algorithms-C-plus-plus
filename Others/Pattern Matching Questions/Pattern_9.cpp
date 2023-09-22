#include <iostream>
using namespace std;

// Output 1
//        2 3
//        3 4 5
//        4 5 6 7 
//        5 6 7 8 9
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    while (row <= n){
        int column = 1;
        int value = row;
        while(column <= row){
            cout << value << " ";
            value = value + 1;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}