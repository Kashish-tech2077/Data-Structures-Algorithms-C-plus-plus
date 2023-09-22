#include <iostream>
using namespace std;

// Output 1
//        2 3
//        4 5 6
//        7 8 9 10 
//        11 12 13 14 15
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;
    int sum = 1;
    while(row <= n){
        int column = 1;
        while(column <= row){
            cout << sum << " ";
            sum = sum + 1;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}