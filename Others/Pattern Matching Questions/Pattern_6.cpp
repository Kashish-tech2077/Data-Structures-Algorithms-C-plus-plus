#include <iostream>
using namespace std;

// Output *
//        * *
//        * * *
//        * * * * 
//        * * * * *
int main(){
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    int row = 1;
    while(row <= k){
        int column = 1;
        while(column <= row){
            cout << " * ";
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
    
    return 0;
    }
